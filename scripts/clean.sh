#!/bin/bash

set -e

echo "================================="
echo " Athena-UAV Clean Build"
echo "================================="

source ~/Athena/athena_ws/scripts/athena_env.sh

cd $ATHENA_WS

echo "Removing build artifacts..."

rm -rf build
rm -rf install
rm -rf log

echo ""
echo "Clean complete."
echo "Run ./build.sh to rebuild Athena."
