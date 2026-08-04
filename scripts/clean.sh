#!/bin/bash

set -e

echo "================================="
echo " Athena-UAV Clean Build"
echo "================================="

WORKSPACE=~/Athena/athena_ws

cd $WORKSPACE

echo "Removing build files..."

rm -rf build
rm -rf install
rm -rf log

echo "Clean complete."

echo "Run ./scripts/build.sh to rebuild Athena."