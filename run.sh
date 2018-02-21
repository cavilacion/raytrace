#!/bin/bash
echo "Configuring project..."
cd build
cmake ..
echo "Building project..."
make
echo "Running project..."
./ray ../Scenes/scene04.json
xdg-open ../Scenes/scene04.png
