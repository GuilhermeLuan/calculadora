cmake_minimum_required(VERSION 3.28)
project(calculadora C)

set(CMAKE_C_STANDARD 99)

add_executable(calculadora main.c
        calculadora.c
        calculadora.h)
