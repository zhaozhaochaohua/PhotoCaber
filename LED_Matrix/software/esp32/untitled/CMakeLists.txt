cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

link_directories(lbs)
link_directories(libs)
#include_directories(D:/Workspace_2021/AutoPhotoStation/LED_Matrix/software/esp32/untitled/header)
#include_directories(AFTER header)

add_executable(untitled main.cpp FUJIFILM.cpp FUJIFILM.h)
