#!/bin/bash

set -e

echo "================================="
echo " Athena-UAV Launch System"
echo "================================="

WORKSPACE=~/Athena/athena_ws

echo "Sourcing ROS 2 Jazzy..."
source /opt/ros/jazzy/setup.bash

echo "Sourcing Athena workspace..."
source $WORKSPACE/install/setup.bash

echo "Launching Athena..."

ros2 launch athena_bringup athena.launch.py