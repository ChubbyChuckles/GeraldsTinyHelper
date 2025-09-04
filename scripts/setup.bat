@echo off
echo Setting up GeraldsTinyHelper development environment...

REM Check if cmake is installed
cmake --version >nul 2>&1
if %errorlevel% neq 0 (
    echo CMake not found. Please install CMake from https://cmake.org/download/
    exit /b 1
) else (
    echo CMake found.
)

REM Create build directory
if not exist build mkdir build

echo Setup complete.