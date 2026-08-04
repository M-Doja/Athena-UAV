# ATHENA_COMMAND_REFERENCE.md

# Athena-UAV Command Reference

**Version:** 0.4.1
**Platform:** Raspberry Pi 4B
**Operating System:** Ubuntu 24.04 LTS
**ROS Distribution:** Jazzy

---

# Workspace

Athena workspace location:

```text
~/Athena/athena_ws
```

Scripts:

```text
~/Athena/athena_ws/scripts
```

---

# Building Athena

Build the complete workspace:

```bash
cd ~/Athena/athena_ws/scripts
./build.sh
```

Manual build:

```bash
cd ~/Athena/athena_ws
source /opt/ros/jazzy/setup.bash
colcon build --symlink-install
source install/setup.bash
```

---

# Launching Athena

Launch the complete Athena system:

```bash
cd ~/Athena/athena_ws/scripts
./launch.sh
```

Manual launch:

```bash
source /opt/ros/jazzy/setup.bash
source ~/Athena/athena_ws/install/setup.bash

ros2 launch athena_bringup athena.launch.py
```

---

# Cleaning the Workspace

Remove all generated build files:

```bash
cd ~/Athena/athena_ws/scripts
./clean.sh
```

Manual clean:

```bash
cd ~/Athena/athena_ws

rm -rf build install log
```

---

# System Status

Display Athena system status:

```bash
cd ~/Athena/athena_ws/scripts
./status.sh
```

---

# ROS Commands

List running nodes:

```bash
ros2 node list
```

List topics:

```bash
ros2 topic list
```

Display node information:

```bash
ros2 node info <node_name>
```

Echo SystemStatus:

```bash
ros2 topic echo /athena/system_status
```

Display a single SystemStatus message:

```bash
ros2 topic echo /athena/system_status --once
```

Show interface definition:

```bash
ros2 interface show athena_interfaces/msg/SystemStatus
```

---

# Workspace Maintenance

Rebuild after package changes:

```bash
cd ~/Athena/athena_ws

rm -rf build install log

source /opt/ros/jazzy/setup.bash

colcon build --symlink-install

source install/setup.bash
```

---

# Current ROS Packages

Current workspace packages:

* athena_bringup
* athena_core
* athena_health_manager
* athena_interfaces

---

# Current Capabilities

Implemented:

* Native Raspberry Pi development
* ROS 2 Jazzy workspace
* Athena launch system
* Athena Core Manager
* Health Manager
* SystemStatus interface
* Build automation
* Launch automation
* Workspace cleaning
* Status reporting

---

# Planned Capabilities

* Node Registry
* Heartbeat monitoring
* Fault detection
* Diagnostic reporting
* Hardware Abstraction Layer (HAL)
* PX4 bridge
* Rover communication
* AI perception
* Mission manager
* Autonomous navigation
* Voice interface

---

# Common Troubleshooting

Re-source the environment:

```bash
source /opt/ros/jazzy/setup.bash
source ~/Athena/athena_ws/install/setup.bash
```

Check that ROS is available:

```bash
ros2 --help
```

Verify the workspace builds:

```bash
./build.sh
```

Launch Athena:

```bash
./launch.sh
```

Check health:

```bash
./status.sh
```
