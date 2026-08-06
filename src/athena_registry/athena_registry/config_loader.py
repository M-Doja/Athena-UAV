from pathlib import Path
import yaml


class ConfigLoader:
    """
    Loads Registry configuration from YAML.
    """

    @staticmethod
    def load(config_path: str):
        path = Path(config_path)

        if not path.exists():
            raise FileNotFoundError(
                f"Configuration file not found: {config_path}"
            )

        with path.open("r", encoding="utf-8") as file:
            return yaml.safe_load(file)
