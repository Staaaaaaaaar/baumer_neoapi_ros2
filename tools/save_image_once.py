#!/usr/bin/env python3
import argparse
import sys
from pathlib import Path

import cv2
import numpy as np
import rclpy
from rclpy.qos import DurabilityPolicy, HistoryPolicy, QoSProfile, ReliabilityPolicy
from sensor_msgs.msg import Image


def image_to_cv(msg: Image) -> np.ndarray:
    encoding = msg.encoding.lower()
    data = np.frombuffer(msg.data, dtype=np.uint8)

    if encoding == "mono8":
        rows = data.reshape((msg.height, msg.step))
        return rows[:, : msg.width].copy()

    if encoding == "mono16":
        dtype = ">u2" if msg.is_bigendian else "<u2"
        values = np.frombuffer(msg.data, dtype=np.dtype(dtype))
        row_stride = msg.step // 2
        rows = values.reshape((msg.height, row_stride))
        return rows[:, : msg.width].copy()

    if encoding in ("bgr8", "rgb8"):
        rows = data.reshape((msg.height, msg.step))
        image = rows[:, : msg.width * 3].reshape((msg.height, msg.width, 3)).copy()
        if encoding == "rgb8":
            image = cv2.cvtColor(image, cv2.COLOR_RGB2BGR)
        return image

    if encoding in ("bgra8", "rgba8"):
        rows = data.reshape((msg.height, msg.step))
        image = rows[:, : msg.width * 4].reshape((msg.height, msg.width, 4)).copy()
        if encoding == "rgba8":
            image = cv2.cvtColor(image, cv2.COLOR_RGBA2BGRA)
        return image

    raise ValueError(f"Unsupported encoding for saving: {msg.encoding}")


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--topic", default="/image_raw")
    parser.add_argument("--output", default="image_raw_once.png")
    parser.add_argument("--reliability", choices=("reliable", "best_effort"), default="reliable")
    parser.add_argument("--timeout", type=float, default=10.0)
    args = parser.parse_args()

    rclpy.init()
    node = rclpy.create_node("save_image_once")
    reliability = ReliabilityPolicy.RELIABLE if args.reliability == "reliable" else ReliabilityPolicy.BEST_EFFORT
    qos = QoSProfile(
        history=HistoryPolicy.KEEP_LAST,
        depth=1,
        reliability=reliability,
        durability=DurabilityPolicy.VOLATILE,
    )

    received = {"msg": None}

    def callback(msg: Image) -> None:
      received["msg"] = msg

    subscription = node.create_subscription(Image, args.topic, callback, qos)
    end_time = node.get_clock().now().nanoseconds / 1e9 + args.timeout
    while rclpy.ok() and received["msg"] is None:
        rclpy.spin_once(node, timeout_sec=0.1)
        if node.get_clock().now().nanoseconds / 1e9 > end_time:
            break

    node.destroy_subscription(subscription)
    if received["msg"] is None:
        node.destroy_node()
        rclpy.shutdown()
        print(f"Timed out waiting for {args.topic}", file=sys.stderr)
        return 1

    msg = received["msg"]
    image = image_to_cv(msg)
    output = Path(args.output)
    ok = cv2.imwrite(str(output), image)

    node.destroy_node()
    rclpy.shutdown()

    if not ok:
        print(f"Failed to write {output}", file=sys.stderr)
        return 1

    print(f"topic: {args.topic}")
    print(f"stamp: {msg.header.stamp.sec}.{msg.header.stamp.nanosec:09d}")
    print(f"frame_id: {msg.header.frame_id}")
    print(f"width: {msg.width}")
    print(f"height: {msg.height}")
    print(f"encoding: {msg.encoding}")
    print(f"is_bigendian: {msg.is_bigendian}")
    print(f"step: {msg.step}")
    print(f"data bytes: {len(msg.data)}")
    print(f"saved: {output.resolve()}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
