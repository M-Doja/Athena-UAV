#!/bin/bash

set -e

echo "================================="
echo " Athena-UAV Build System"
echo "================================="

source ~/Athena/athena_ws/scripts/athena_env.sh

echo "[1/3] Entering workspace..."

cd $ATHENA_WS

echo "[2/3] Building Athena..."

colcon build --symlink-install

echo "[3/3] Build complete"

echo "================================="
echo " Athena-UAV Build Complete"
echo "================================="
