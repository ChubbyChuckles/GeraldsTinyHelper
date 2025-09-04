#!/bin/bash

echo "Formatting code..."

find src include -name "*.c" -o -name "*.h" | xargs clang-format -i

echo "Formatting complete."