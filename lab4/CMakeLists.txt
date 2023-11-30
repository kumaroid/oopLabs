cmake_minimum_required(VERSION 3.22)
project(lab4)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lab4 main.cpp include/figure.h include/square.h include/trapezoid.h include/rectangle.h include/figure_array.h
)

target_include_directories(lab4 PRIVATE include)
set_target_properties(lab4 PROPERTIES OUTPUT_NAME "main")

add_executable(lab4_tests test/test.cpp include/figure.h include/square.h include/trapezoid.h include/rectangle.h include/figure_array.h
)

target_include_directories(lab4_tests PRIVATE include)
set_target_properties(lab4_tests PROPERTIES OUTPUT_NAME "tests")
target_link_libraries(lab4_tests ${GTEST_LIBRARIES})

enable_testing()
add_test(lab4_tests lab4_tests)