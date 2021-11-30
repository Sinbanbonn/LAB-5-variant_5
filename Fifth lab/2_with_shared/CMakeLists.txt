cmake_minimum_required(VERSION 3.20)
project(2_with_shared)
set(CMAKE_CXX_STANDARD 14)
add_executable(2_with_shared task2.cpp)
add_library( test_library SHARED library.cpp)
include_directories(library)
target_link_libraries(2_with_shared test_library)

