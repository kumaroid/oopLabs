cmake_minimum_required(VERSION 3.22.1)
project(lab7)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main main.cpp src/NPC.cpp src/Pegas.cpp src/Knight.cpp src/Dragon.cpp src/Factory.cpp src/Observers.cpp src/DataMethods.cpp src/FightManager.cpp)

enable_testing()
add_executable(tests tests/tests.cpp src/NPC.cpp src/Pegas.cpp src/Knight.cpp src/Dragon.cpp src/Factory.cpp src/Observers.cpp src/DataMethods.cpp)
target_link_libraries(tests ${GTEST_LIBRARIES})

add_test(NAME BASIC COMMAND tests)