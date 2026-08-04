# Athena-UAV

## Overview

Athena-UAV is a modular autonomous robotics operating system built on ROS 2 Jazzy for the Raspberry Pi platform. It is designed to provide a reusable software foundation for autonomous ground and aerial vehicles.

The project emphasizes a layered architecture with clear separation between system management, hardware interfaces, autonomy, and AI capabilities. This allows Athena to support multiple vehicle types—including rovers and multirotor drones—while maintaining a common core.

---

## Current Development Platform

**Hardware**

* Raspberry Pi 4B
* Ubuntu 24.04 LTS
* ARM64 (aarch64)

**Software**

* ROS 2 Jazzy
* Python 3
* Colcon Build System

---

## Current Project Structure

```text
Athena/
│
├── athena_ws/
│   ├── src/
│   ├── build/
│   ├── install/
│   ├── log/
│   └── scripts/
│
├── docs/
├── config/
├── logs/
└── README.md
```

---

## Current ROS Packages

* athena_bringup
* athena_core
* athena_health_manager
* athena_interfaces

---

## Current Features

* Native Raspberry Pi development environment
* ROS 2 workspace
* Athena Core Manager
* Health Manager
* System status messaging
* Launch system
* Build automation
* Workspace maintenance scripts

---

## Architecture

```text
Athena Core
      │
      ▼
Health Manager
      │
      ▼
Node Registry (planned)
      │
      ▼
Hardware Abstraction Layer (planned)
      │
 ┌────┼────┐
 │    │    │
PX4 Sensors Cameras
```

Future layers will add mission management, navigation, AI perception, and operator interfaces.

---

## Build

```bash
cd ~/Athena/athena_ws/scripts
./build.sh
```

---

## Launch

```bash
cd ~/Athena/athena_ws/scripts
./launch.sh
```

---

## Clean

```bash
cd ~/Athena/athena_ws/scripts
./clean.sh
```

---

## Status

```bash
cd ~/Athena/athena_ws/scripts
./status.sh
```

---

## Development Roadmap

### Phase 1 — Core Infrastructure ✅

* ROS 2 workspace
* Athena Core
* Health Manager
* Interfaces
* Bringup
* Automation scripts

### Phase 2 — System Management (In Progress)

* Node Registry
* Heartbeat monitoring
* Diagnostics
* Fault detection
* Logging

### Phase 3 — Hardware Abstraction Layer

* PX4 integration
* Sensor framework
* Camera interfaces
* Vehicle communications

### Phase 4 — Rover Platform

* Losi Lasernut integration
* Mission execution
* Telemetry
* Safety systems

### Phase 5 — Intelligent Autonomy

* AI perception
* Object detection
* Voice interaction
* Mission planning
* Autonomous navigation

---

## Vision

Athena-UAV is intended to become a scalable autonomous operating system capable of managing multiple robotic platforms through a common software architecture. By separating core services from hardware-specific implementations, the system is designed for long-term extensibility and maintainability.
