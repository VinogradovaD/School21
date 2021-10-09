cmake_minimum_required(VERSION 3.20)
project(ft_isalpha C)

set(CMAKE_C_STANDARD 99)

add_executable(ft_isalpha main.c cmake-build-debug/ft_isalpha.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c)
