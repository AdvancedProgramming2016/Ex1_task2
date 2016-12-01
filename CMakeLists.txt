cmake_minimum_required(VERSION 3.6)
project(Ex1_task2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

set(SOURCE_FILES main.cpp Point.cpp Point.h Vertex.cpp Vertex.h Graph.cpp Graph.h Grid.cpp Grid.h Bfs.cpp Bfs.h)
add_executable(Ex1_task2 ${SOURCE_FILES})