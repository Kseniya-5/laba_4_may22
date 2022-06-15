cmake_minimum_required(VERSION 3.20)
project(laba_4_may22)

set(CMAKE_CXX_STANDARD 20)

add_executable(laba_4_may22 main.cpp)

target_include_directories(laba_4_may22 PUBLIC
        headers/Product
        headers/Position
        headers/Order
        headers/Client
        headers/PriceBase
        )
