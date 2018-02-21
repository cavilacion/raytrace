#!/bin/bash
echo "Configuring project..."
cd build
cmake ..
echo "Building project..."
make
echo "Running project..."
./ray ../Scenes/scene03_3shapes.json
xdg-open ../Scenes/scene03.png