#include <atomic>
#include <chrono>
#include <cstring>
#include <memory>
#include <mutex>
#include <stdexcept>
#include <string>
#include <thread>

#include "neoapi/neoapi.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/image_encodings.hpp"
#include "sensor_msgs/msg/image.hpp"

using namespace std::chrono_literals;

namespace
{
struct EncodingInfo
{
  std::string encoding;
  size_t bytes_per_pixel;
  bool bigendian;
};

EncodingInfo encoding_from_pixel_format(const std::string & pixel_format)
{
  if (pixel_format == "Mono8") {
    return {sensor_msgs::image_encodings::MONO8, 1, false};
  }
  if (pixel_format == "Mono16") {
    return {sensor_msgs::image_encodings::MONO16, 2, false};
  }
  if (pixel_format == "BGR8" || pixel_format == "BGR8Packed") {
    return {sensor_msgs::image_encodings::BGR8, 3, false};
  }
  if (pixel_format == "RGB8" || pixel_format == "RGB8Packed") {
    return {sensor_msgs::image_encodings::RGB8, 3, false};
  }
  if (pixel_format == "BGRa8" || pixel_format == "BGRA8" || pixel_format == "BGRA8Packed") {
    return {sensor_msgs::image_encodings::BGRA8, 4, false};
  }
  if (pixel_format == "RGBa8" || pixel_format == "RGBA8" || pixel_format == "RGBA8Packed") {
    return {sensor_msgs::image_encodings::RGBA8, 4, false};
  }
  if (pixel_format == "BayerRG8") {
    return {sensor_msgs::image_encodings::BAYER_RGGB8, 1, false};
  }
  if (pixel_format == "BayerBG8") {
    return {sensor_msgs::image_encodings::BAYER_BGGR8, 1, false};
  }
  if (pixel_format == "BayerGB8") {
    return {sensor_msgs::image_encodings::BAYER_GBRG8, 1, false};
  }
  if (pixel_format == "BayerGR8") {
    return {sensor_msgs::image_encodings::BAYER_GRBG8, 1, false};
  }

  throw std::runtime_error("Unsupported ROS image encoding for neoAPI PixelFormat: " + pixel_format);
}

std::chrono::nanoseconds period_from_rate(double hz)
{
  if (hz <= 0.0) {
    throw std::runtime_error("publish_rate must be > 0");
  }
  return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::duration<double>(1.0 / hz));
}
}  // namespace

class BaumerCameraNode : public rclcpp::Node
{
public:
  BaumerCameraNode()
  : Node("baumer_camera_node")
  {
    camera_id_ = declare_parameter<std::string>("camera_id", "");
    image_topic_ = declare_parameter<std::string>("image_topic", "image_raw");
    frame_id_ = declare_parameter<std::string>("frame_id", "baumer_camera");
    pixel_format_ = declare_parameter<std::string>("pixel_format", "BGR8");
    publish_rate_hz_ = declare_parameter<double>("publish_rate", 10.0);
    grab_rate_hz_ = declare_parameter<double>("grab_rate", publish_rate_hz_);
    camera_frame_rate_hz_ = declare_parameter<double>("camera_frame_rate", 0.0);
    exposure_time_us_ = declare_parameter<double>("exposure_time_us", 10000.0);
    const int qos_depth = declare_parameter<int>("qos_depth", 5);
    qos_reliability_ = declare_parameter<std::string>("qos_reliability", "best_effort");

    image_pub_ = create_publisher<sensor_msgs::msg::Image>(image_topic_, make_image_qos(qos_depth, qos_reliability_));

    connect_camera();
    configure_camera();

    running_.store(true);
    acquisition_thread_ = std::thread(&BaumerCameraNode::acquisition_loop, this);
    reset_publish_timer();

    param_callback_handle_ = add_on_set_parameters_callback(
      std::bind(&BaumerCameraNode::on_parameters, this, std::placeholders::_1));
  }

  ~BaumerCameraNode() override
  {
    running_.store(false);
    if (acquisition_thread_.joinable()) {
      acquisition_thread_.join();
    }
    try {
      if (camera_.IsConnected()) {
        camera_.Disconnect();
      }
    } catch (NeoAPI::NeoException & exc) {
      RCLCPP_WARN(get_logger(), "Error while disconnecting camera: %s", exc.GetDescription());
    }
  }

private:
  void connect_camera()
  {
    const std::string camera_label = camera_id_.empty() ? "" : " with id '" + camera_id_ + "'";
    RCLCPP_INFO(get_logger(), "Connecting Baumer camera%s", camera_label.c_str());
    camera_.Connect(camera_id_.c_str()); // 如果确定是GigE的话，可以直接camera_.Connect("GigE")
    RCLCPP_INFO(get_logger(), "Connected. neoAPI library version: %s", NeoAPI::Cam::GetLibraryVersion().c_str());
  }

  rclcpp::QoS make_image_qos(int depth, const std::string & reliability)
  {
    auto qos = rclcpp::QoS(rclcpp::KeepLast(depth));
    qos.durability_volatile();

    if (reliability == "best_effort") {
      qos.best_effort();
    } else if (reliability == "reliable") {
      qos.reliable();
    } else {
      throw std::runtime_error("qos_reliability must be 'best_effort' or 'reliable'");
    }
    return qos;
  }

  void configure_camera()
  {
    std::lock_guard<std::mutex> lock(camera_mutex_);
    if (exposure_time_us_ > 0.0 && camera_.IsWritable("ExposureTime")) {
      camera_.SetFeature("ExposureTime", exposure_time_us_);
      RCLCPP_INFO(get_logger(), "Set ExposureTime to %.3f us", exposure_time_us_);
    }
    set_camera_frame_rate(camera_frame_rate_hz_);
  }

  void set_camera_frame_rate(double hz)
  {
    if (hz <= 0.0) {
      return;
    }

    if (camera_.IsWritable("AcquisitionFrameRateEnable")) {
      camera_.SetFeature("AcquisitionFrameRateEnable", true);
    }

    if (camera_.IsWritable("AcquisitionFrameRate")) {
      camera_.SetFeature("AcquisitionFrameRate", hz);
      RCLCPP_INFO(get_logger(), "Set AcquisitionFrameRate to %.3f Hz", hz);
    } else if (camera_.IsWritable("AcquisitionFrameRateAbs")) {
      camera_.SetFeature("AcquisitionFrameRateAbs", hz);
      RCLCPP_INFO(get_logger(), "Set AcquisitionFrameRateAbs to %.3f Hz", hz);
    } else {
      RCLCPP_WARN(get_logger(), "Camera frame-rate feature is not writable; software grab_rate still applies");
    }
  }

  rcl_interfaces::msg::SetParametersResult on_parameters(const std::vector<rclcpp::Parameter> & parameters)
  {
    rcl_interfaces::msg::SetParametersResult result;
    result.successful = true;

    for (const auto & parameter : parameters) {
      try {
        if (parameter.get_name() == "publish_rate") {
          const double hz = parameter.as_double();
          (void)period_from_rate(hz);
          publish_rate_hz_ = hz;
          reset_publish_timer();
          RCLCPP_INFO(get_logger(), "publish_rate set to %.3f Hz", publish_rate_hz_);
        } else if (parameter.get_name() == "grab_rate") {
          const double hz = parameter.as_double();
          if (hz < 0.0) {
            throw std::runtime_error("grab_rate must be >= 0; use 0 for unlimited");
          }
          if (hz > 0.0) {
            (void)period_from_rate(hz);
          }
          {
            std::lock_guard<std::mutex> lock(config_mutex_);
            grab_rate_hz_ = hz;
          }
          RCLCPP_INFO(get_logger(), "grab_rate set to %.3f Hz", hz);
        } else if (parameter.get_name() == "camera_frame_rate") {
          const double hz = parameter.as_double();
          if (hz < 0.0) {
            throw std::runtime_error("camera_frame_rate must be >= 0; use 0 to leave camera unchanged");
          }
          {
            std::lock_guard<std::mutex> config_lock(config_mutex_);
            camera_frame_rate_hz_ = hz;
          }
          {
            std::lock_guard<std::mutex> camera_lock(camera_mutex_);
            set_camera_frame_rate(hz);
          }
        } else if (parameter.get_name() == "frame_id") {
          std::lock_guard<std::mutex> lock(config_mutex_);
          frame_id_ = parameter.as_string();
        } else if (parameter.get_name() == "pixel_format") {
          std::lock_guard<std::mutex> lock(config_mutex_);
          pixel_format_ = parameter.as_string();
          RCLCPP_INFO(get_logger(), "pixel_format set to '%s'", pixel_format_.c_str());
        } else if (parameter.get_name() == "exposure_time_us") {
          const double exposure = parameter.as_double();
          std::lock_guard<std::mutex> lock(camera_mutex_);
          if (exposure > 0.0 && camera_.IsConnected() && camera_.IsWritable("ExposureTime")) {
            camera_.SetFeature("ExposureTime", exposure);
          }
          exposure_time_us_ = exposure;
        }
      } catch (const std::exception & exc) {
        result.successful = false;
        result.reason = exc.what();
        return result;
      } catch (NeoAPI::NeoException & exc) {
        result.successful = false;
        result.reason = exc.GetDescription();
        return result;
      }
    }

    return result;
  }

  void reset_publish_timer()
  {
    std::lock_guard<std::mutex> lock(timer_mutex_);
    publish_timer_ = create_wall_timer(
      period_from_rate(publish_rate_hz_),
      std::bind(&BaumerCameraNode::publish_latest_image, this));
  }

  void acquisition_loop()
  {
    while (running_.load() && rclcpp::ok()) {
      const auto loop_start = std::chrono::steady_clock::now();
      try {
        NeoAPI::Image image;
        bool connected = false;
        {
          std::lock_guard<std::mutex> lock(camera_mutex_);
          connected = camera_.IsConnected();
          if (connected) {
            image = camera_.GetImage();
          }
        }
        if (!connected) {
          std::this_thread::sleep_for(100ms);
          continue;
        }
        if (image.IsEmpty()) {
          continue;
        }

        auto msg = image_to_ros_msg(image);
        if (!logged_first_image_.exchange(true)) {
          RCLCPP_INFO(
            get_logger(), "First image received: %ux%u encoding=%s step=%u bytes=%zu",
            msg->width, msg->height, msg->encoding.c_str(), msg->step, msg->data.size());
        }
        {
          std::lock_guard<std::mutex> lock(latest_image_mutex_);
          latest_image_ = std::move(msg);
        }
      } catch (NeoAPI::NeoException & exc) {
        RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 2000, "neoAPI acquisition error: %s", exc.GetDescription());
        std::this_thread::sleep_for(100ms);
      } catch (const std::exception & exc) {
        RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 2000, "Acquisition error: %s", exc.what());
        std::this_thread::sleep_for(100ms);
      }

      const double grab_rate_hz = get_grab_rate_hz();
      if (grab_rate_hz > 0.0) {
        std::this_thread::sleep_until(loop_start + period_from_rate(grab_rate_hz));
      }
    }
  }

  double get_grab_rate_hz()
  {
    std::lock_guard<std::mutex> lock(config_mutex_);
    return grab_rate_hz_;
  }

  std::shared_ptr<sensor_msgs::msg::Image> image_to_ros_msg(NeoAPI::Image image)
  {
    std::string target_format;
    std::string frame_id;
    {
      std::lock_guard<std::mutex> lock(config_mutex_);
      target_format = pixel_format_;
      frame_id = frame_id_;
    }

    if (!target_format.empty() && image.GetPixelFormat() != target_format.c_str()) {
      if (!image.IsPixelFormatAvailable(target_format.c_str())) {
        throw std::runtime_error("neoAPI cannot convert image to requested PixelFormat: " + target_format);
      }
      image = image.Convert(target_format.c_str());
    }

    const std::string actual_format = image.GetPixelFormat().c_str();
    const auto encoding = encoding_from_pixel_format(actual_format);
    const auto width = static_cast<uint32_t>(image.GetWidth()); // 是否安全
    const auto height = static_cast<uint32_t>(image.GetHeight());
    const auto image_size = static_cast<size_t>(image.GetSize());
    const void * image_data = image.GetImageData();

    if (width == 0 || height == 0 || image_size == 0 || image_data == nullptr) {
      throw std::runtime_error("Received an empty image buffer");
    }

    auto msg = std::make_shared<sensor_msgs::msg::Image>();
    msg->header.stamp = now();
    msg->header.frame_id = frame_id;
    msg->height = height;
    msg->width = width;
    msg->encoding = encoding.encoding;
    msg->is_bigendian = encoding.bigendian ? 1 : 0; // 是否为大端法
    msg->step = image_size % height == 0  // 有填充，一行的步长。似乎第二种情况难以触发。
      ? static_cast<sensor_msgs::msg::Image::_step_type>(image_size / height)
      : static_cast<sensor_msgs::msg::Image::_step_type>(width * encoding.bytes_per_pixel);
    msg->data.resize(image_size);
    std::memcpy(msg->data.data(), image_data, image_size);
    return msg;
  }

  void publish_latest_image()
  {
    std::shared_ptr<sensor_msgs::msg::Image> image;
    {
      std::lock_guard<std::mutex> lock(latest_image_mutex_);
      image = latest_image_;
    }

    if (image) {
      image_pub_->publish(*image);
      if (!logged_first_publish_.exchange(true)) {
        RCLCPP_INFO(get_logger(), "First image published on '%s'", image_topic_.c_str());
      }
    } else {
      RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 5000, "No camera image received yet");
    }
  }

  NeoAPI::Cam camera_;
  std::mutex camera_mutex_;
  std::atomic_bool running_{false};
  std::thread acquisition_thread_;

  std::mutex config_mutex_;
  std::mutex latest_image_mutex_;
  std::shared_ptr<sensor_msgs::msg::Image> latest_image_;

  std::mutex timer_mutex_;
  rclcpp::TimerBase::SharedPtr publish_timer_;
  rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr image_pub_;
  OnSetParametersCallbackHandle::SharedPtr param_callback_handle_;

  std::string camera_id_;
  std::string image_topic_;
  std::string frame_id_;
  std::string pixel_format_;
  std::string qos_reliability_;
  double publish_rate_hz_{10.0};
  double grab_rate_hz_{10.0};
  double camera_frame_rate_hz_{0.0};
  double exposure_time_us_{10000.0};

  std::atomic_bool logged_first_image_{false};
  std::atomic_bool logged_first_publish_{false};
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  try {
    rclcpp::spin(std::make_shared<BaumerCameraNode>());
  } catch (NeoAPI::NeoException & exc) {
    std::cerr << "neoAPI error: " << exc.GetDescription() << std::endl;
    rclcpp::shutdown();
    return 1;
  } catch (const std::exception & exc) {
    std::cerr << "error: " << exc.what() << std::endl;
    rclcpp::shutdown();
    return 1;
  }
  rclcpp::shutdown();
  return 0;
}
