cmake_minimum_required(VERSION 3.14)
project(Lab11 C)

set(SOURCE_FILES
        ${SDIR}lab11.c
        ${SDIR}lab11.h
        )

set(CMAKE_C_STANDARD 99)

add_executable(Lab11 lab11.c)