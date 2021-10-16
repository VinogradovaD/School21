cmake_minimum_required(VERSION 3.20)
project(1 C)

set(CMAKE_C_STANDARD 99)

add_executable(1 main.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c)
