cmake_minimum_required(VERSION 3.22.1)
project(gtest)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lab3 main.cpp src/figure.cpp src/square.cpp src/rectangle.cpp src/trapezoid.cpp src/figure_array.cpp)

enable_testing()

add_executable(tests tests/tests.cpp src/figure.cpp src/square.cpp src/rectangle.cpp src/trapezoid.cpp src/figure_array.cpp)
target_link_libraries(tests ${GTEST_LIBRARIES})

add_test(NAME BASIC COMMAND tests) 