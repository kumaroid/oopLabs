cmake_minimum_required(VERSION 3.22)

project(lab2)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-ggdb)

include_directories(${CMAKE_SOURCE_DIR})

add_subdirectory(Twelve)
add_subdirectory(tests)

add_executable(main main.cpp)
target_link_libraries(main twelve_lib)