//  ИНФОРМАЦИЯ О ВЕСОВОМ ПРОДУКТЕ
#pragma once
#include "Product.hpp"
#ifndef LABA_4_MAY22_WEIGHT_PRODUCT_HPP
#define LABA_4_MAY22_WEIGHT_PRODUCT_HPP

class WeightProduct : public Product {
public:
    WeightProduct(const ProductInfo &info, double cost) : Product(info), m_cost_per_kg(cost) {}

    WeightProduct(const WeightProduct &w_p) : Product(w_p.m_product_info), m_cost_per_kg(w_p.m_cost_per_kg) {}

    double get_cost() const override {
        return m_cost_per_kg;
    }

    std::string get_info() const override {
        std::ostringstream stream;
        stream << m_product_info.get_info() << " : " << m_cost_per_kg << " per kg";
        return stream.str();
    }

private:
    double m_cost_per_kg;
};

#endif //LABA_4_MAY22_WEIGHT_PRODUCT_HPP
