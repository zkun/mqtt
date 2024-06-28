cmake_minimum_required(VERSION 3.14)

project(MQTT)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 REQUIRED COMPONENTS Core WebSockets)

aux_source_directory(. LIBRARY_SOURCES)
add_library(mqtt ${LIBRARY_SOURCES})

target_link_libraries(mqtt PUBLIC Qt::WebSockets)
target_link_libraries(mqtt PRIVATE Qt::CorePrivate)
target_include_directories(mqtt PUBLIC ${PROJECT_SOURCE_DIR})
