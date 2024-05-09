cmake_minimum_required(VERSION 2.8 FATAL_ERROR) # #对于cmake版本的最低版本的要求
project(generate_random_pointcloud) #  建立的工程名，例如源代码目录路径的变量名为CH_DIR
find_package(PCL 1.2 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})


add_library(generate_random_pointcloud SHARED ${PROJECT_SOURCE_DIR}/src/random_pointcloud.cpp)

install(TARGETS generate_random_pointcloud LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/lib)
install(FILES ${PROJECT_SOURCE_DIR}/include/random_pointcloud.h DESTINATION ${PROJECT_SOURCE_DIR}/header)