#pragma once

#include "Product_Info.hpp"
#include "sstream"

#ifndef LABA_4_MAY22_PRODUCT_HPP
#define LABA_4_MAY22_PRODUCT_HPP

class Product {
public:
    Product() {}

    Product(const ProductInfo &info) : m_product_info(info) {}

    Product(const Product &pr) : m_product_info(pr.m_product_info) {} //конструктор копирования

    virtual std::string get_info() const {
        return "default product";
    }

    virtual double get_cost() const {
        return 0;
    }

protected:
    ProductInfo m_product_info;
};

#endif //LABA_4_MAY22_PRODUCT_HPP
