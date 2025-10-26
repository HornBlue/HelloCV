cmake_minimum_required(VERSION 4.0)
project(OpenCV_Project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(OpenCV 4.5.4 REQUIRED)
# set(OpenCV_DIR /usr/local/share/opencv4)
include_directories(${OpenCV_INCLUDE_DIRS})


add_executable(OpenCV_Project main.cpp
        redlighttest.cpp
        greenlighttest.cpp
        test.cpp)
target_link_libraries(OpenCV_Project ${OpenCV_LIBS})
