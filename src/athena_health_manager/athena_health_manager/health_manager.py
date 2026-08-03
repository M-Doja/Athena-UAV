#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from athena_interfaces.msg import SystemHealth
from athena_interfaces.msg import SystemStatus


class HealthManager(Node):

    def __init__(self):

        super().__init__('athena_health_manager')

        self.systems = {}

        self.subscription = self.create_subscription(
            SystemHealth,
            '/athena/system_health',
            self.health_callback,
            10
        )

        self.status_publisher = self.create_publisher(
            SystemStatus,
            '/athena/system_status',
            10
        )

        self.timer = self.create_timer(
            1.0,
            self.publish_status
        )

        self.get_logger().info(
            "Athena Health Manager started"
        )


    def health_callback(self, msg):

        self.systems[msg.node_name] = msg


    def publish_status(self):

        status = SystemStatus()

        status.active_nodes = len(self.systems)

        status.warning_count = 0
        status.error_count = 0

        if status.active_nodes > 0:
            status.overall_state = "OPERATIONAL"
        else:
            status.overall_state = "OFFLINE"

        status.timestamp = self.get_clock().now().to_msg()

        self.status_publisher.publish(status)

        self.get_logger().info(
            f"State: {status.overall_state}, "
            f"Nodes: {status.active_nodes}"
        )


def main(args=None):

    rclpy.init(args=args)

    node = HealthManager()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
