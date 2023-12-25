cmake_minimum_required(VERSION 3.22.1)

project(lab6)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main main.cpp src/NPC.cpp src/Pegas.cpp src/Knight.cpp src/Dragon.cpp src/Factory.cpp src/Observers.cpp src/DataMethods.cpp)

enable_testing()
add_executable(testing tests/test.cpp src/NPC.cpp src/Pegas.cpp src/Knight.cpp src/Dragon.cpp src/Factory.cpp src/Observers.cpp src/DataMethods.cpp)
target_link_libraries(testing ${GTEST_LIBRARIES})

add_test(NAME BASIC COMMAND testing)