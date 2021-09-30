cmake_minimum_required(VERSION 3.20)
project(VLK_SKIPEX)

set(CMAKE_CXX_STANDARD 17)

# Add useful packages
find_package(glfw3 REQUIRED)

set(SOURCE_FILES src/main.cpp src/lve_window.hpp src/lve_window.cpp src/FirstApp.cpp src/FirstApp.hpp)

# VLK_SKIPEX Executable
add_executable(VLK_SKIPEX ${SOURCE_FILES})

# Link Libraries
target_link_libraries(${PROJECT_NAME} -lglfw -lvulkan -ldl -lpthread)
