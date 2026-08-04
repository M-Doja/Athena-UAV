#!/bin/bash

echo "================================="
echo " Athena-UAV System Status"
echo "================================="

source ~/Athena/athena_ws/scripts/athena_env.sh

echo ""
echo "ROS 2:"
echo "------"

ros2 --version

echo ""
echo "Workspace:"
echo "----------"

if [ -d $ATHENA_WS/install ]; then
    echo "Athena workspace built ✓"
else
    echo "Workspace not built ✗"
fi

echo ""
echo "Active Nodes:"
echo "-------------"

ros2 node list

echo ""
echo "Health Status:"
echo "--------------"

ros2 topic echo /athena/system_status --once

echo ""
echo "================================="
