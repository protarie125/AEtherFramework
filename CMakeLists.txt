cmake_minimum_required(VERSION 2.8)
project(AEtherFramework)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS} includes)
add_executable(AEtherFramework sources/MainApp.cpp sources/ADisplay.cpp sources/Display.cpp)
target_link_libraries(AEtherFramework ${OpenCV_LIBS})

