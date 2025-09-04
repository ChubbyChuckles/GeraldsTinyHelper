#!/bin/bash

echo "Installing dependencies..."

# For Ubuntu/Debian
if command -v apt-get &> /dev/null
then
    sudo apt-get update
    sudo apt-get install -y cmake build-essential clang-format clang-tidy cppcheck valgrind doxygen
# For macOS
elif command -v brew &> /dev/null
then
    brew install cmake clang-format clang-tidy cppcheck valgrind doxygen
else
    echo "Please install dependencies manually."
    exit 1
fi

echo "Dependencies installed."