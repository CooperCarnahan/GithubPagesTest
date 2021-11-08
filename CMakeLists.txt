cmake_minimum_required(VERSION 3.13)  # CMake version check
project(foo)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

add_subdirectory(src)
include_directories(inc)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(${PROJECT_NAME} ${SOURCE})
