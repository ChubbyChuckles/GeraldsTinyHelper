# Tests CMakeLists.txt

# Add Unity testing framework
add_library(unity unity.c unity.h)

# Add test executable
add_executable(test_example test_example.c)
target_link_libraries(test_example unity)

# Add test
add_test(NAME test_example COMMAND test_example)