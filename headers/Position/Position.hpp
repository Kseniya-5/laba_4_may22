#pragma once

#include "Weight_Product.hpp"
#include "Amount_Product.hpp"
#include <iostream>

#ifndef LABA_4_MAY22_POSITION_HPP
#define LABA_4_MAY22_POSITION_HPP

class Position {
public:
    Position(const Product &product) noexcept: m_ptr_product(&product) {}


    const Product *get_ptr_product() noexcept {
        return m_ptr_product;
    }

    virtual double get_cost() const noexcept {
        return 0;
    }

    virtual double get_quantity() const noexcept {
        return 0;
    }

protected:
    const Product *m_ptr_product;
};

#endif //LABA_4_MAY22_POSITION_HPP
