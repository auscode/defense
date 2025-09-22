cmake_minimum_required(VERSION 3.16)
project(Defense LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

# --- Fix: enable Qt's automoc, autouic, autorrc ---
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)   

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/gui/MainWindow.cpp
    src/gui/MainWindow.h 
)

target_include_directories(${PROJECT_NAME} PRIVATE include)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)
