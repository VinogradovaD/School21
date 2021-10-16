cmake_minimum_required(VERSION 3.20)
project(proj C)

set(CMAKE_C_STANDARD 99)

add_executable(proj main.c ft_strchr.c ft_strrchr.c ft_strncmp.c)
