cmake_minimum_required(VERSION 3.19)
project(aoc2021)

set(CMAKE_CXX_STANDARD 14)

include_directories(day01)
include_directories(day02)

add_executable(aoc2021
        aoc2021.cpp
        aocDay.cpp
        day01/Day01.cpp
        day01/Day01.h
        day02/Day02.cpp
        day02/Day02.h
        utils/utils.cpp utils/utils.h)

add_executable(day_01_tests
        aocDay.cpp
        day01/Day01.cpp
        day01/Day01.h day01/day01_test.cpp utils/utils.cpp utils/utils.h)


add_executable(day_02_tests
        aocDay.cpp
        day02/Day02.cpp
        day02/Day02.h day02/day02_test.cpp utils/utils.cpp utils/utils.h)
