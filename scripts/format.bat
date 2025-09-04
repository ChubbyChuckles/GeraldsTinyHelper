@echo off
echo Formatting code...

for /r src %%f in (*.c *.h) do clang-format -i "%%f"

for /r include %%f in (*.c *.h) do clang-format -i "%%f"

echo Formatting complete.