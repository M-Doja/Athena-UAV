#!/bin/bash

set -e

echo "================================="
echo " Athena-UAV Launch System"
echo "================================="

source ~/Athena/athena_ws/scripts/athena_env.sh

echo "Launching Athena..."

ros2 launch athena_bringup athena.launch.py
