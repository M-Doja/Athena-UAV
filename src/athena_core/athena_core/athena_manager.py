#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from athena_interfaces.msg import SystemHealth


class AthenaManager(Node):

    def __init__(self):
        super().__init__('athena_manager')

        self.health_pub = self.create_publisher(
            SystemHealth,
            'athena/system_health',
            10
        )

        self.timer = self.create_timer(
            1.0,
            self.publish_health
        )

        self.get_logger().info(
            "Athena Core Manager started"
        )


    def publish_health(self):

        msg = SystemHealth()

        msg.node_name = "athena_manager"
        msg.state = "OPERATIONAL"
        msg.cpu_usage = 0.0
        msg.memory_usage = 0.0
        msg.timestamp = self.get_clock().now().to_msg()

        self.health_pub.publish(msg)


def main(args=None):

    rclpy.init(args=args)

    node = AthenaManager()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
