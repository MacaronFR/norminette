cmake_minimum_required(VERSION 3.19)
project(norminette C)

set(CMAKE_C_STANDARD 99)

include_directories(headers)

add_executable(norminette main.c src/lexical/in.c)