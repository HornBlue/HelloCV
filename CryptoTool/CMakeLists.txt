cmake_minimum_required(VERSION 3.10)  
project(CryptoTool)                   

# 设置C++标准（C++11）
set(CMAKE_CXX_STANDARD 11)            
set(CMAKE_CXX_STANDARD_REQUIRED ON)   

include_directories(include)          


file(GLOB_RECURSE SOURCES "src/*.cpp")


add_executable(CryptoTool src/main.cpp
                          src/Menu.cpp
                          src/Crypto.cpp
                          src/FileHandler.cpp)