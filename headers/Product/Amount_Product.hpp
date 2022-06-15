//  ИНФОРМАЦИЯ О КОЛИЧЕСТВЕННОМ ПРОДУКТЕ
#pragma once

#include "Product.hpp"

#ifndef LABA_4_MAY22_AMOUNT_PRODUCT_HPP
#define LABA_4_MAY22_AMOUNT_PRODUCT_HPP

class AmountProduct : public Product {
public:
    AmountProduct(const ProductInfo &info, double cost) : Product(info), m_cost_per_one(cost) {}

    AmountProduct(const AmountProduct &w_p) : Product(w_p.m_product_info), m_cost_per_one(w_p.m_cost_per_one) {}

    double get_cost() const noexcept override {
        return m_cost_per_one;
    }

    std::string get_info() const noexcept override {
        std::ostringstream stream;
        stream << m_product_info.get_info() << " : " << m_cost_per_one << " per one";
        return stream.str();
    }

private:
    double m_cost_per_one;
};

#endif //LABA_4_MAY22_AMOUNT_PRODUCT_HPP
