cmake_minimum_required(VERSION 3.20)
project(laba_4_may22)

set(CMAKE_CXX_STANDARD 20)

add_executable(laba_4_may22 main.cpp headers/Product/Product.hpp headers/Product/Product_Info.hpp headers/Product/Amount_Product.hpp headers/Product/Weight_Product.hpp headers/Position/Position.hpp headers/Position/Amount_Position.hpp headers/Position/Weight_Position.hpp headers/Order/Order.hpp headers/Client/Client.hpp headers/PriceBase/Price_Base.hpp)

target_include_directories(laba_4_may22 PUBLIC
        headers/Product
        headers/Position
        headers/Order
        headers/Client
        headers/PriceBase
        )
