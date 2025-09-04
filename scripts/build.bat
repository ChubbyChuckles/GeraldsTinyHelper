@echo off
echo Building GeraldsTinyHelper...

if not exist build mkdir build

cd build

cmake ..

make

echo Build complete.