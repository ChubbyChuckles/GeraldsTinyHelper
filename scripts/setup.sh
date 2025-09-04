#!/bin/bash

echo "Setting up GeraldsTinyHelper development environment..."

# Check if cmake is installed
if ! command -v cmake &> /dev/null
then
    echo "CMake not found. Installing..."
    # For Ubuntu/Debian
    if command -v apt-get &> /dev/null
    then
        sudo apt-get update
        sudo apt-get install -y cmake build-essential
    # For macOS
    elif command -v brew &> /dev/null
    then
        brew install cmake
    else
        echo "Please install CMake manually."
        exit 1
    fi
else
    echo "CMake found."
fi

# Create build directory
mkdir -p build

echo "Setup complete."