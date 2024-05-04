cmake_minimum_required(VERSION 3.28)
project(KMI_XJC C)

set(CMAKE_C_STANDARD 11)

include_directories(C-test)

add_executable(KMI_XJC
        C-test/calc.c
        C-test/calc.h
        C-test/testCalc.c)
