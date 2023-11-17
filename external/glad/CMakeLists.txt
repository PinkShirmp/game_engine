cmake_minimum_required(VERSION 3.22.1)
project(glad)

add_library(glad SHARED ./src/glad.c)
target_include_directories(glad PRIVATE ./include)
