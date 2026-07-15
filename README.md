# Baumer neoAPI ROS 2 Image Publisher

This repository contains a ROS 2 Humble C++ node that publishes images from a Baumer camera through Baumer neoAPI.

The repository is self-contained for x86_64 Linux development because it includes the required Baumer neoAPI C++ SDK files under `third_party/`.

## Repository Layout

```text
.
├── baumer_neoapi_ros2/                       # ROS 2 package
├── third_party/
│   └── Baumer_neoAPI_1.5.0_lin_x86_64_cpp/   # Baumer neoAPI headers, libraries, tools, drivers, license
└── tools/
    └── save_image_once.py                    # Optional image subscriber/saver helper
```

## System Requirements

- Ubuntu 22.04
- ROS 2 Humble
- x86_64 Linux
- Baumer GigE or USB camera
- For GigE cameras: a configured Ethernet interface in the same subnet as the camera

For ARM64 boards, use Baumer's `lin_aarch64_cpp` SDK package instead of the bundled x86_64 SDK and update the SDK folder path/name accordingly.

## Install Dependencies

```bash
sudo apt update
sudo apt install -y \
  build-essential \
  cmake \
  python3-colcon-common-extensions \
  ros-humble-rclcpp \
  ros-humble-sensor-msgs \
  ros-humble-image-tools \
  ros-humble-rqt-image-view
```

Optional but recommended on WSL if ROS graph discovery is unstable:

```bash
sudo apt install -y ros-humble-rmw-cyclonedds-cpp
```

## Build

From the repository root:

```bash
source /opt/ros/humble/setup.bash
colcon build --packages-select baumer_neoapi_ros2
source install/setup.bash
```

The package CMake file automatically uses:

```text
third_party/Baumer_neoAPI_1.5.0_lin_x86_64_cpp
```

You can override the SDK path if needed:

```bash
colcon build --packages-select baumer_neoapi_ros2 \
  --cmake-args -DNEOAPI_ROOT_DIR=/path/to/Baumer_neoAPI_..._cpp
```

## GigE Camera Network Setup

The camera and host Ethernet interface must be in the same subnet and must not share the same IP address.

Example:

```text
Host NIC:  192.168.1.10/24
Camera:    192.168.1.11/24
```

List detected GigE cameras:

```bash
sudo third_party/Baumer_neoAPI_1.5.0_lin_x86_64_cpp/tools/gevipconfig -v
```

Temporarily force cameras into a compatible subnet:

```bash
sudo third_party/Baumer_neoAPI_1.5.0_lin_x86_64_cpp/tools/gevipconfig -a
```

Set a persistent IP for a specific camera:

```bash
sudo third_party/Baumer_neoAPI_1.5.0_lin_x86_64_cpp/tools/gevipconfig \
  -c <CAMERA_SERIAL_OR_MAC> \
  -i 192.168.1.11 \
  -s 255.255.255.0 \
  -p
```

## USB Camera Permission

For USB cameras, install Baumer's udev rule once:

```bash
sudo cp third_party/Baumer_neoAPI_1.5.0_lin_x86_64_cpp/drivers/udev_rules/99-baumer-cameras.rules /etc/udev/rules.d/
sudo udevadm control --reload-rules
sudo udevadm trigger
```

Unplug and reconnect the camera after changing udev rules.

## Run

For WSL or single-machine testing, use:

```bash
export ROS_LOCALHOST_ONLY=1
```

If CycloneDDS is installed and desired:

```bash
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
```

Start the camera node:

```bash
ros2 run baumer_neoapi_ros2 baumer_camera_node --ros-args \
  -p camera_id:='"<CAMERA_SERIAL>"' \
  -p publish_rate:=5.0 \
  -p grab_rate:=5.0 \
  -p camera_frame_rate:=5.0 \
  -p pixel_format:=Mono8 \
  -p qos_depth:=1 \
  -p qos_reliability:=reliable
```

If only one Baumer camera is connected, `camera_id` can be omitted.

## Check The Image Topic

```bash
ros2 topic hz /image_raw
```

View the image:

```bash
ros2 run image_tools showimage --ros-args \
  -r image:=/image_raw \
  -p reliability:=reliable
```

Or:

```bash
ros2 run rqt_image_view rqt_image_view /image_raw
```

Save one frame:

```bash
python3 tools/save_image_once.py \
  --topic /image_raw \
  --output image_raw_once.png \
  --reliability reliable
```

## Image Format

The node publishes `sensor_msgs/msg/Image`.

Common `pixel_format` values:

- `Mono8`: 8-bit grayscale, low bandwidth.
- `BGR8`: 8-bit 3-channel BGR, OpenCV-friendly color format.
- `RGB8`: 8-bit 3-channel RGB.
- `Mono16`: 16-bit grayscale.

`BGR8` uses about 3 times the bandwidth and memory of `Mono8` at the same resolution.

## Notes About GitHub Redistribution

The bundled Baumer SDK files remain governed by Baumer's license in:

```text
third_party/Baumer_neoAPI_1.5.0_lin_x86_64_cpp/LICENSE
```

Review that license before publishing this repository publicly.

## Troubleshooting

If `ros2 topic hz /image_raw` works but `ros2 topic list` is inconsistent on WSL, this is usually DDS discovery instability rather than a camera-node failure. Try CycloneDDS:

```bash
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
export ROS_LOCALHOST_ONLY=1
```

Make sure every ROS terminal uses the same `ROS_LOCALHOST_ONLY`, `ROS_DOMAIN_ID`, and `RMW_IMPLEMENTATION` values.
