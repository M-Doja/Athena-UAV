#!/bin/bash

set -e

echo "================================="
echo " Athena-UAV Build System"
echo "================================="

WORKSPACE=~/Athena/athena_ws

echo "[1/4] Sourcing ROS 2 Jazzy..."
source /opt/ros/jazzy/setup.bash

echo "[2/4] Entering workspace..."
cd $WORKSPACE

echo "[3/4] Building Athena..."
colcon build --symlink-install

echo "[4/4] Sourcing workspace..."
source install/setup.bash

echo "================================="
echo " Athena-UAV Build Complete"
echo "================================="