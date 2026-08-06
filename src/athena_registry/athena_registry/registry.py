from .node_info import NodeInfo


class Registry:
    """
    Athena-UAV Node Registry.

    Maintains the authoritative list
    of software components.
    """

    def __init__(self):
        self.nodes = {}

    def register_node(self, node_info: NodeInfo):
        """
        Add a node to the registry.
        """

        self.nodes[node_info.name] = node_info


    def unregister_node(self, node_name: str):
        """
        Remove a node from the registry.
        """

        if node_name in self.nodes:
            del self.nodes[node_name]


    def heartbeat(self, node_name: str):
        """
        Update node heartbeat.
        """

        if node_name in self.nodes:
            self.nodes[node_name].update_heartbeat()


    def get_node(self, node_name: str):
        """
        Retrieve a node.
        """

        return self.nodes.get(node_name)


    def get_all_nodes(self):
        """
        Return all registered nodes.
        """

        return list(self.nodes.values())


    def get_required_nodes(self):
        """
        Return only required nodes.
        """

        return [
            node
            for node in self.nodes.values()
            if node.required
        ]
