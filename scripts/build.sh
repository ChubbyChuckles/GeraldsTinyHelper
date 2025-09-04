#!/bin/bash

echo "Building GeraldsTinyHelper..."

mkdir -p build

cd build

cmake ..

make

echo "Build complete."