cmake_minimum_required(VERSION 3.28)
project(camo_genetics)

set(CMAKE_CXX_STANDARD 17)

add_executable(camo_genetics main.cpp
        libs/camo_member.cpp
        libs/camo_member.h
        libs/camo_puddle.cpp
        libs/camo_puddle.h)
