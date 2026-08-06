import rclpy
from rclpy.node import Node

from .registry import Registry
from .node_info import NodeInfo


class RegistryNode(Node):
    """
    Athena-UAV Node Registry Service.
    """

    def __init__(self):
        super().__init__("athena_registry")

        self.registry = Registry()

        self.get_logger().info("Athena Registry started")

        self._register_core_nodes()

    def _register_core_nodes(self):
        """
        Register built-in Athena-UAV services.
        """

        nodes = [
            NodeInfo(
                name="athena_registry",
                description="Node Registry Service",
                version="0.5.0",
                required=True,
            ),
            NodeInfo(
                name="athena_core",
                description="Athena-UAV Core",
                version="0.5.0",
                required=True,
            ),
            NodeInfo(
                name="athena_health_manager",
                description="Health Manager",
                version="0.5.0",
                required=True,
            ),
        ]

        for node in nodes:
            self.registry.register_node(node)
            self.get_logger().info(f"Registered: {node.name}")

        self.get_logger().info(
            f"Total Nodes: {len(self.registry.get_all_nodes())}"
        )


def main(args=None):
    rclpy.init(args=args)

    node = RegistryNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
