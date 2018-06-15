cmake_minimum_required(VERSION 3.9)
project(sort)

set(CMAKE_CXX_STANDARD 11)

add_executable(sort main.cpp)
add_executable(shellsort shellsort.cpp)
add_executable(insertsort insertsort.cpp)
add_executable(bubblesort bubblesort.cpp)
add_executable(mergesort mergesort.cpp)
add_executable(selectsort selectsort.cpp)
add_executable(quicksort quicksort.cpp)
add_executable(heapsort heapsort.cpp)