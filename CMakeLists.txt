cmake_minimum_required(VERSION 3.6)
project(Ex1_task2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(SOURCE_FILES main.cpp Point.cpp Point.h Vertex.cpp Vertex.h Graph.cpp Graph.h Grid.cpp Grid.h Bfs.cpp Bfs.h Tests/main.cpp Tests/BfsTest.cpp Tests/BfsTest.cpp Tests/GridTest.cpp Tests/PointTest.cpp Tests/GraphTest.cpp Tests/VertexTest.cpp)
add_executable(Ex1_task2 ${SOURCE_FILES} Tests/BfsTest.cpp)
target_link_libraries(Ex1_task2 gtest gtest_main)