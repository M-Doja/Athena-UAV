 # Athena Reference Rover
 
Production-grade reference implementation for an Athena-compatible autonomous rover.

## Purpose

This repository provides the foundational rover stack that can:

- Boot into a known operational lifecycle
- Register and authenticate with Athena Mission Control
- Report health and telemetry with standardized payloads
- Transition safely into a `READY` state before mission execution

## Current Engineering Focus

Phase 1 targets the Rover Core Framework:

1. Repository bootstrap and governance
2. `athena_interface` package scaffold
3. `rover_bringup` package scaffold
4. Robot manifest and state machine baselines
5. CI and contribution workflow setup

## Repository Structure

```text
athena-reference-rover/
├── .github/
├── docs/
├── hardware/
├── firmware/
├── ros2_ws/
│   └── src/
├── launch/
├── config/
├── maps/
├── models/
├── logs/
├── scripts/
├── tests/
├── docker/
├── tools/
├── README.md
├── LICENSE
├── CONTRIBUTING.md
└── CHANGELOG.md
```

## Quick Start

Prerequisites:

- ROS 2 (target distro to be finalized by project maintainers)
- Python 3.10+
- Colcon

Build workspace:

```bash
cd ros2_ws
colcon build
source install/setup.bash
```

Run core framework:

```bash
ros2 launch rover_bringup rover_core.launch.py
```

Run status UI in another terminal:

```bash
python tools/device_status_ui/server.py
```

Then open `http://localhost:8080`.

## Documentation

- Architecture docs: `docs/architecture/`
- Developer process docs: `docs/developer/`
- End-user docs: `docs/user/`

## Status

This repository is in early development and currently establishing production conventions before control and autonomy features are integrated.
# Athena-Rover