cmake_minimum_required(VERSION 4.0.1)

project(camera)

set(OpenCV_DIR C:/msys64/ucrt64/lib/cmake/opencv4)
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(${PROJECT_NAME} main.cpp)



target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})