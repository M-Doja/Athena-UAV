# Athena OS Command Reference v0.1

## Environment Setup

### Start ROS 2 Environment

```bash
source /opt/ros/jazzy/setup.bash
```

### Start Athena Workspace Environment

```bash
source ~/athena_ws/install/setup.bash
```

Recommended startup sequence:

```bash
source /opt/ros/jazzy/setup.bash
source ~/athena_ws/install/setup.bash
```

---

# Workspace Navigation

## Enter Athena Workspace

```bash
cd ~/athena_ws
```

## Enter Source Directory

```bash
cd ~/athena_ws/src
```

## View Workspace Packages

```bash
ls ~/athena_ws/src
```

---

# Building Athena

## Standard Build

```bash
cd ~/athena_ws
colcon build
```

## Build With Symlink Install

Recommended during development:

```bash
cd ~/athena_ws
colcon build --symlink-install
```

## Clean Build

Use after changing package structure:

```bash
cd ~/athena_ws

rm -rf build install log

colcon build --symlink-install
```

---

# ROS 2 Verification

## Check ROS 2 Installation

```bash
ros2 --help
```

## List ROS Packages

```bash
ros2 pkg list
```

## Find Athena Packages

```bash
ros2 pkg list | grep athena
```

## Show Package Information

Example:

```bash
ros2 pkg prefix athena_core
```

---

# Running Athena

## Launch Complete Athena System

```bash
ros2 launch athena_bringup athena.launch.py
```

Current launch starts:

* athena_manager
* athena_health_manager

---

# Running Individual Nodes

## Athena Core

```bash
ros2 run athena_core athena_manager
```

## Athena Health Manager

```bash
ros2 run athena_health_manager health_manager
```

---

# ROS 2 Topics

## List Active Topics

```bash
ros2 topic list
```

## View Athena Health Data

```bash
ros2 topic echo /athena/system_health
```

## Show Topic Information

```bash
ros2 topic info /athena/system_health
```

## Show Message Type

```bash
ros2 topic type /athena/system_health
```

---

# ROS 2 Interfaces

## List Athena Interfaces

```bash
ros2 interface list | grep athena
```

## Inspect a Message

Example:

```bash
ros2 interface show athena_interfaces/msg/SystemHealth
```

---

# Package Creation

## Create Python Package

Example:

```bash
ros2 pkg create package_name \
--build-type ament_python
```

## Create CMake Package

Example:

```bash
ros2 pkg create package_name \
--build-type ament_cmake
```

---

# Debugging

## View Node List

```bash
ros2 node list
```

## Node Information

Example:

```bash
ros2 node info /athena_manager
```

## Check Running Processes

```bash
ps aux | grep ros
```

---

# Git Workflow (Athena Development)

## Check Status

```bash
git status
```

## Add Changes

```bash
git add .
```

## Commit Milestone

Example:

```bash
git commit -m "Milestone: Athena health manager v0.1"
```

---

# Current Athena Architecture

```
athena_ws
|
├── athena_interfaces
│       |
│       └── SystemHealth.msg
│
├── athena_core
│       |
│       └── athena_manager
│
├── athena_health_manager
│       |
│       └── health_manager
│
└── athena_bringup
        |
        └── athena.launch.py
```
