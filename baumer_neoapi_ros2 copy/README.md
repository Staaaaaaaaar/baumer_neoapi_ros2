# baumer_neoapi_ros2

ROS 2 Humble image publisher for Baumer GigE/USB cameras using Baumer neoAPI C++.

This package expects the Baumer SDK to be available at:

```text
../third_party/Baumer_neoAPI_1.5.0_lin_x86_64_cpp
```

That path is relative to this ROS package directory and is already used by the bundled repository layout.

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

## Run Example

```bash
ros2 run baumer_neoapi_ros2 baumer_camera_node --ros-args \
  -p camera_id:='"700013387421"' \
  -p publish_rate:=5.0 \
  -p grab_rate:=5.0 \
  -p camera_frame_rate:=5.0 \
  -p pixel_format:=Mono8 \
  -p qos_depth:=1 \
  -p qos_reliability:=reliable
```

## Runtime Parameters

```bash
ros2 param set /baumer_camera_node publish_rate 2.0
ros2 param set /baumer_camera_node grab_rate 2.0
ros2 param set /baumer_camera_node camera_frame_rate 2.0
ros2 param set /baumer_camera_node pixel_format BGR8
ros2 param set /baumer_camera_node exposure_time_us 5000.0
```

Parameter services may be affected by DDS discovery behavior on WSL. If parameter commands are unreliable, restart the node with the desired values.
