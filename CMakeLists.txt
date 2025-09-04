cmake_minimum_required(VERSION 3.10)

project(GeraldsTinyHelper VERSION 0.1.0 LANGUAGES C)

# Set C standard to C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Enable warnings
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Add executable
add_executable(${PROJECT_NAME} src/main.c)

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE include)

# Set output directory
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# Enable testing
enable_testing()

# Add test executable if tests exist
if(EXISTS "${CMAKE_SOURCE_DIR}/tests")
    add_subdirectory(tests)
endif()