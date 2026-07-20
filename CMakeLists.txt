cmake_minimum_required(VERSION 3.9.3)
project(baumer_neoapi_ros2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(Threads REQUIRED)

set(NEOAPI_SDK_DIR_NAME "" CACHE STRING "Baumer neoAPI SDK directory name under third_party")
if(NOT NEOAPI_SDK_DIR_NAME)
  string(TOLOWER "${CMAKE_SYSTEM_PROCESSOR}" NEOAPI_SYSTEM_PROCESSOR)
  if(NEOAPI_SYSTEM_PROCESSOR MATCHES "^(x86_64|amd64)$")
    set(NEOAPI_SDK_DIR_NAME "Baumer_neoAPI_1.5.0_lin_x86_64_cpp" CACHE STRING "Baumer neoAPI SDK directory name under third_party" FORCE)
  elseif(NEOAPI_SYSTEM_PROCESSOR MATCHES "^(aarch64|arm64)$")
    set(NEOAPI_SDK_DIR_NAME "Baumer_neoAPI_1.5.0_lin_aarch64_cpp" CACHE STRING "Baumer neoAPI SDK directory name under third_party" FORCE)
  elseif(NEOAPI_SYSTEM_PROCESSOR MATCHES "^(armhf|armv7l|armv7)$")
    set(NEOAPI_SDK_DIR_NAME "Baumer_neoAPI_1.5.0_lin_armhf_cpp" CACHE STRING "Baumer neoAPI SDK directory name under third_party" FORCE)
  else()
    message(WARNING "Unknown processor '${CMAKE_SYSTEM_PROCESSOR}'. Set -DNEOAPI_SDK_DIR_NAME=... or -DNEOAPI_ROOT_DIR=...")
  endif()
endif()

set(NEOAPI_ROOT_CANDIDATES
  "${CMAKE_CURRENT_LIST_DIR}/../third_party/${NEOAPI_SDK_DIR_NAME}"
  "${CMAKE_CURRENT_LIST_DIR}/third_party/${NEOAPI_SDK_DIR_NAME}"
)

set(DEFAULT_NEOAPI_ROOT "")
foreach(candidate ${NEOAPI_ROOT_CANDIDATES})
  if(EXISTS "${candidate}/include/neoapi/neoapi.hpp")
    set(DEFAULT_NEOAPI_ROOT "${candidate}")
    break()
  endif()
endforeach()

set(NEOAPI_ROOT_DIR "${DEFAULT_NEOAPI_ROOT}" CACHE PATH "Path to the extracted Baumer neoAPI C++ package")

if(NOT EXISTS "${NEOAPI_ROOT_DIR}/include/neoapi/neoapi.hpp")
  message(FATAL_ERROR "neoAPI headers not found. Set -DNEOAPI_ROOT_DIR=/path/to/Baumer_neoAPI_..._cpp")
endif()

if(NOT EXISTS "${NEOAPI_ROOT_DIR}/lib/libneoapi_cpp.so")
  message(FATAL_ERROR "neoAPI library not found. Set -DNEOAPI_ROOT_DIR=/path/to/Baumer_neoAPI_..._cpp")
endif()

message(STATUS "Using Baumer neoAPI SDK: ${NEOAPI_ROOT_DIR}")

add_executable(baumer_camera_node src/baumer_camera_node.cpp)
target_include_directories(baumer_camera_node
  PRIVATE
    "${NEOAPI_ROOT_DIR}/include"
)
target_link_directories(baumer_camera_node
  PRIVATE
    "${NEOAPI_ROOT_DIR}/lib"
)
target_link_libraries(baumer_camera_node
  neoapi_cpp
  Threads::Threads
)
ament_target_dependencies(baumer_camera_node
  rclcpp
  sensor_msgs
)

set_target_properties(baumer_camera_node PROPERTIES
  BUILD_RPATH "${NEOAPI_ROOT_DIR}/lib"
  INSTALL_RPATH "${NEOAPI_ROOT_DIR}/lib"
)

install(TARGETS baumer_camera_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
