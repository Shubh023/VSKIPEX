cmake_minimum_required(VERSION 3.20)
project(VLK_SKIPEX)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES src/main.cpp src/LveWindow.hpp src/LveWindow.cpp src/FirstApp.cpp src/FirstApp.hpp src/LvePipeline.cpp src/LvePipeline.hpp)

# VLK_SKIPEX Executable
add_executable(VLK_SKIPEX ${SOURCE_FILES})

# Add useful packages / libraries
find_package(glfw3 CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} glfw)

find_package(Vulkan REQUIRED)
target_include_directories(${PROJECT_NAME} PUBLIC ${Vulkan_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} Vulkan::Vulkan -ldl -lpthread)
