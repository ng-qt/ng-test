cmake_minimum_required(VERSION 2.8)

set (CMAKE_CXX_STANDARD 11)

project(NgTest)

if(MSVC)
  foreach(flag_var
    CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE
    CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO)
    if(${flag_var} MATCHES "/MD")
      string(REGEX REPLACE "/MD" "/MT" ${flag_var} "${${flag_var}}")
    endif()
  endforeach()
elseif(APPLE)
  set(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/deps/VLC.app/Contents/MacOS/lib")
else()
  add_definitions(-std=c++17)
endif()

# Build a shared library named after the project from the files in `src/`
file(GLOB SOURCE_FILES "src/*.cpp" "src/*.h")
add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})

link_directories($ENV{QT_LIBRARIES})

# Gives our library file a .node extension without any "lib" prefix
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "" SUFFIX ".node")

target_include_directories(${PROJECT_NAME} PRIVATE
  ${CMAKE_SOURCE_DIR}/node_modules/node-addon-api
  ${CMAKE_SOURCE_DIR}/node_modules/node-addon-api/src
  ${CMAKE_JS_INC})
target_include_directories(${PROJECT_NAME} PRIVATE
  $ENV{QT_INCLUDE_DIRS}
  $ENV{QT_INCLUDE_DIRS}/QtTest
  $ENV{QT_INCLUDE_DIRS}/QtWidgets
  $ENV{QT_INCLUDE_DIRS}/QtCore)
target_link_libraries(${PROJECT_NAME} PRIVATE
  ${CMAKE_JS_LIB}
  $ENV{QT_LIBRARIES}/libQt5Widgets.so
  $ENV{QT_LIBRARIES}/libQt5Test.so
  $ENV{QT_LIBRARIES}/libQt5Core.so)
