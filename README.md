# Baumer neoAPI ROS 2 Image Publisher

This repository contains a ROS 2 Humble C++ node that publishes images from a Baumer camera through Baumer neoAPI.

The repository is self-contained for Linux development because it includes Baumer neoAPI C++ SDK files under `third_party/`.

## Repository Layout

```text
.
├── baumer_neoapi_ros2/                       # ROS 2 package
├── third_party/
│   ├── Baumer_neoAPI_1.5.0_lin_x86_64_cpp/   # x86_64 SDK
│   ├── Baumer_neoAPI_1.5.0_lin_aarch64_cpp/  # ARM64 SDK
│   └── Baumer_neoAPI_1.5.0_lin_armhf_cpp/    # 32-bit ARM hard-float SDK
└── tools/
    └── save_image_once.py                    # Optional image subscriber/saver helper
```

## System Requirements

- Ubuntu 22.04
- ROS 2 Humble
- x86_64, aarch64, or armhf Linux
- Baumer GigE or USB camera
- For GigE cameras: a configured Ethernet interface in the same subnet as the camera

Supported SDK folder names:

```text
third_party/Baumer_neoAPI_1.5.0_lin_x86_64_cpp
third_party/Baumer_neoAPI_1.5.0_lin_aarch64_cpp
third_party/Baumer_neoAPI_1.5.0_lin_armhf_cpp
```

The CMake file selects the SDK folder automatically from `CMAKE_SYSTEM_PROCESSOR`:

```text
x86_64 / amd64       -> Baumer_neoAPI_1.5.0_lin_x86_64_cpp
aarch64 / arm64      -> Baumer_neoAPI_1.5.0_lin_aarch64_cpp
armhf / armv7l       -> Baumer_neoAPI_1.5.0_lin_armhf_cpp
```

For shell commands that call Baumer tools directly, set this helper variable from the repository root:

```bash
case "$(uname -m)" in
  x86_64|amd64)
    export BAUMER_NEOAPI_SDK=third_party/Baumer_neoAPI_1.5.0_lin_x86_64_cpp
    ;;
  aarch64|arm64)
    export BAUMER_NEOAPI_SDK=third_party/Baumer_neoAPI_1.5.0_lin_aarch64_cpp
    ;;
  armhf|armv7l|armv7*)
    export BAUMER_NEOAPI_SDK=third_party/Baumer_neoAPI_1.5.0_lin_armhf_cpp
    ;;
  *)
    echo "Unsupported architecture: $(uname -m)"
    return 1 2>/dev/null || exit 1
    ;;
esac
```

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
sudo apt install ros-humble-rmw-zenoh-cpp
```

## Quick Start

```bash
colcon build --packages-select baumer_neoapi_ros2
```
note: If it is cross-compilation, automatic recognition may identify the architecture of the build machine instead of the target board; in that case, manual specification is required:
```bash
colcon build --symlink-install \
  --cmake-args -DNEOAPI_SDK_DIR_NAME=Baumer_neoAPI_1.5.0_lin_aarch64_cpp
```

There will be 2 or 3 terminals, they have some common instructions and some specific one:

Common setup for every terminal:

```bash
source /opt/ros/humble/setup.bash
source install/setup.bash
export RMW_IMPLEMENTATION=rmw_zenoh_cpp
```


specific:

①zenoh:
```bash
ros2 run rmw_zenoh_cpp rmw_zenohd
```

② camera:
```bash
export ZENOH_CONFIG_OVERRIDE='mode="client";connect/endpoints=["tcp/127.0.0.1:7447"]'
ros2 run baumer_neoapi_ros2 baumer_camera_node --ros-args \
  -p publish_rate:=30.0 \
  -p grab_rate:=30.0 \
  -p camera_frame_rate:=30.0 \
  -p pixel_format:=Mono8 \
  -p qos_depth:=1 \
  -p qos_reliability:=reliable
```

③ image_reading(optional):
```bash
export ZENOH_CONFIG_OVERRIDE='mode="client";connect/endpoints=["tcp/127.0.0.1:7447"]'
ros2 run image_tools showimage --ros-args \
  -r image:=/image_raw \
  -p reliability:=reliable
```


## Build

From the repository root:

```bash
source /opt/ros/humble/setup.bash
colcon build --packages-select baumer_neoapi_ros2
source install/setup.bash
```

The package CMake file automatically searches these SDK layouts:

```text
third_party/Baumer_neoAPI_1.5.0_lin_x86_64_cpp
../third_party/Baumer_neoAPI_1.5.0_lin_x86_64_cpp
third_party/Baumer_neoAPI_1.5.0_lin_aarch64_cpp
../third_party/Baumer_neoAPI_1.5.0_lin_aarch64_cpp
third_party/Baumer_neoAPI_1.5.0_lin_armhf_cpp
../third_party/Baumer_neoAPI_1.5.0_lin_armhf_cpp
```

The architecture-specific SDK is selected automatically. If you switch machines or SDK architecture, remove old CMake caches before rebuilding:

```bash
rm -rf build install log
```

You can override the SDK path if needed:

```bash
colcon build --packages-select baumer_neoapi_ros2 \
  --cmake-args -DNEOAPI_ROOT_DIR=/path/to/Baumer_neoAPI_..._cpp
```

You can also override only the SDK folder name:

```bash
colcon build --packages-select baumer_neoapi_ros2 \
  --cmake-args -DNEOAPI_SDK_DIR_NAME=Baumer_neoAPI_1.5.0_lin_aarch64_cpp
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
sudo "$BAUMER_NEOAPI_SDK/tools/gevipconfig" -v
```

Temporarily force cameras into a compatible subnet:

```bash
sudo "$BAUMER_NEOAPI_SDK/tools/gevipconfig" -a
```

Set a persistent IP for a specific camera:

```bash
sudo "$BAUMER_NEOAPI_SDK/tools/gevipconfig" \
  -c <CAMERA_SERIAL_OR_MAC> \
  -i 192.168.1.11 \
  -s 255.255.255.0 \
  -p
```

## USB Camera Permission

For USB cameras, install Baumer's udev rule once:

```bash
sudo cp "$BAUMER_NEOAPI_SDK/drivers/udev_rules/99-baumer-cameras.rules" /etc/udev/rules.d/
sudo udevadm control --reload-rules
sudo udevadm trigger
```

Unplug and reconnect the camera after changing udev rules.

## Run

If Zenoh RMW is used by the robot platform:

```bash
export RMW_IMPLEMENTATION=rmw_zenoh_cpp
```

Start the Zenoh router:
```bash
ros2 run rmw_zenoh_cpp rmw_zenohd
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

In the camera node terminal:
```bash
export ZENOH_CONFIG_OVERRIDE='mode="client";connect/endpoints=["tcp/127.0.0.1:7447"]'
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
third_party/Baumer_neoAPI_1.5.0_lin_aarch64_cpp/LICENSE
third_party/Baumer_neoAPI_1.5.0_lin_armhf_cpp/LICENSE
```

Review that license before publishing this repository publicly.

## Troubleshooting

If `ros2 topic hz /image_raw` works but `ros2 topic list` is inconsistent on WSL, this is usually DDS discovery instability rather than a camera-node failure. Try CycloneDDS:

```bash
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
export ROS_LOCALHOST_ONLY=1
```

Make sure every ROS terminal uses the same `ROS_LOCALHOST_ONLY`, `ROS_DOMAIN_ID`, and `RMW_IMPLEMENTATION` values.

## Parameters

| Parameter | Default | Description |
| --- | --- | --- |
| `camera_id` | `""` | Camera search string. Use a serial number such as `"700013387421"` for stable selection. |
| `image_topic` | `image_raw` | Published image topic. |
| `frame_id` | `baumer_camera` | ROS frame id in the image header. |
| `pixel_format` | `BGR8` | neoAPI conversion target. Common values: `Mono8`, `BGR8`, `RGB8`, `Mono16`. |
| `publish_rate` | `10.0` | ROS topic publishing rate in Hz. |
| `grab_rate` | `publish_rate` | Software image grabbing rate in Hz. Use `0.0` for unlimited. |
| `camera_frame_rate` | `0.0` | Requested camera acquisition frame rate in Hz. Use `0.0` to leave the camera unchanged. |
| `exposure_time_us` | `10000.0` | Exposure time in microseconds. Use `0.0` to leave it unchanged. |
| `qos_depth` | `5` | ROS publisher queue depth. |
| `qos_reliability` | `best_effort` | `best_effort` or `reliable`. Use `reliable` when debugging with older `ros2 topic hz` tools. |
