#!/bin/bash

# =================================
# Athena-UAV Environment
# =================================

export ATHENA_ROOT=~/Athena
export ATHENA_WS=$ATHENA_ROOT/athena_ws

# ROS 2 Jazzy
source /opt/ros/jazzy/setup.bash

# Athena Workspace
if [ -f $ATHENA_WS/install/setup.bash ]; then
    source $ATHENA_WS/install/setup.bash
fi
