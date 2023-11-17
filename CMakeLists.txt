cmake_minimum_required(VERSION 3.4...3.20 FATAL_ERROR)

project(graphic_engine)

add_subdirectory(./external/glfw)
add_subdirectory(./external/glad)
include_directories(./external/glfw/include)
include_directories(./external/glad/include)

find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
add_executable(${PROJECT_NAME} src/main.cpp)
target_link_directories(${PROJECT_NAME} PRIVATE ./external/glfw/src)

target_link_directories(${PROJECT_NAME} PRIVATE ./external/glad/src)


target_link_libraries(${PROJECT_NAME} PRIVATE glfw glad GLEW::GLEW)



