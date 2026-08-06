from dataclasses import dataclass, field
from datetime import datetime


@dataclass
class NodeInfo:
    """
    Represents an Athena-UAV software node.
    """

    name: str
    description: str = ""
    version: str = "0.0.0"

    required: bool = True

    state: str = "UNKNOWN"

    heartbeat_rate: float = 1.0

    last_heartbeat: datetime | None = None

    namespace: str = ""

    dependencies: list[str] = field(default_factory=list)

    def update_heartbeat(self):
        """
        Update node heartbeat timestamp.
        """
        self.last_heartbeat = datetime.now()
        self.state = "RUNNING"
