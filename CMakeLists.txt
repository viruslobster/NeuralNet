project(NeuralNet)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(NeuralNet_SRCS NeuralNet.cpp main.cpp)
qt4_automoc(${NeuralNet_SRCS})
add_executable(NeuralNet ${NeuralNet_SRCS})
target_link_libraries(NeuralNet ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})
