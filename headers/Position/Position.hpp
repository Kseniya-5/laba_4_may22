#pragma once

#include "Weight_Product.hpp"
#include "Amount_Product.hpp"

#ifndef LABA_4_MAY22_POSITION_HPP
#define LABA_4_MAY22_POSITION_HPP

class Position {
public:
    Position(const Product &product) : m_ptr_product(nullptr) {}

    virtual ~Position() {
    }

    Product *get_ptr_product() {
        return m_ptr_product;
    }

    virtual double get_cost() const {
        return 0;
    }

    virtual double get_quantity() const {
        return 0;
    }

protected:
    Product *m_ptr_product;
};

#endif //LABA_4_MAY22_POSITION_HPP
