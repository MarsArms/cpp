cmake_minimum_required(VERSION 3.9)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(FirstSecond First.cpp Second.cpp)

add_executable(  FirstSecondThird First.cpp Second.cpp Third.cpp)

add_executable( Classwork CLasswork.cpp)

add_executable(pl player.cpp)

add_executable(homework homework.cpp)

add_executable(homeworkii homeworkii.cpp)

add_executable(hmii hmii.cpp)

add_executable(sizeof sizeof.cpp)

add_executable(homeworkiii homeworkiii.cpp)