//  ИНФОРМАЦИЯ О ВЕСОВОМ ПРОДУКТЕ
#pragma once

#include "Position.hpp"

#ifndef LABA_4_MAY22_WEIGHT_POSITION_HPP
#define LABA_4_MAY22_WEIGHT_POSITION_HPP

class WeightPosition : public Position {
public:
    WeightPosition(const WeightProduct &w_p, double weight) noexcept: Position(Product()), m_weight(weight) {
        m_ptr_product = new WeightProduct(w_p);
    }

    ~WeightPosition() override{
        delete m_ptr_product;
    }

    double get_cost() const noexcept override {
        return (m_ptr_product->get_cost() * m_weight);
    }

    double get_quantity() const noexcept override {
        return m_weight;
    }

private:
    double m_weight;
};

#endif //LABA_4_MAY22_WEIGHT_POSITION_HPP
