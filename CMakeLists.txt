cmake_minimum_required(VERSION 3.13)

project(lox)

set(CMAKE_CXX_STANDARD 23) # Enable the C++23 standard

# Deps
find_package(fmt REQUIRED)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp src/*.hpp)
add_executable(interpreter ${SOURCE_FILES})

target_link_libraries(interpreter fmt::fmt)