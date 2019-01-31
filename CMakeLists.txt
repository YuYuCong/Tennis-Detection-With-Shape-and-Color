cmake_minimum_required(VERSION 3.0)  

set( CMAKE_CXX_COMPILER "g++" )
set( CMAKE_BUILD_TYPE "Debug" )
set( CMAKE_CXX_FLAGS "-std=c++11 -march=native -O3" )

set(target tennis)

set( src_dir ${CMAKE_CURRENT_SOURCE_DIR}/src/)
set( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin )
set( LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib )

set(src_lib
        #${src_dir}cartesian_to_polar.cpp
        ${src_dir}filter.cpp
        ${src_dir}fitellipse.cpp
        #${src_dir}polar_buff.cpp
        #${src_dir}SerialPort.cpp
        ${src_dir}svm_predict.cpp
)


# OpenCV
find_package( OpenCV 3.1 REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

set( THIRD_PARTY_LIBS 
    ${OpenCV_LIBS}
    ${src_lib}
)


message(STATUS "------------------------------------")
message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")
message(STATUS "------------------------------------")

include_directories( ${PROJECT_SOURCE_DIR}/include )

add_executable( ${target}byCYQ ${src_dir}main.cpp )
target_link_libraries( ${target}byCYQ ${THIRD_PARTY_LIBS} )
