//  ИНФОРМАЦИЯ О КОЛИЧЕСТВЕННОМ ПРОДУКТЕ
#pragma once

#include <cstddef>
#include "Position.hpp"

#ifndef LABA_4_MAY22_AMOUNT_POSITION_HPP
#define LABA_4_MAY22_AMOUNT_POSITION_HPP

class AmountPosition : public Position {
public:
    AmountPosition(const AmountProduct &a_p, size_t amount) noexcept: Position(Product()), m_amount(amount) {
        m_ptr_product = new AmountProduct(a_p);
    }

    ~AmountPosition() {
        delete m_ptr_product;
    }

    double get_cost() const noexcept override {
        return (m_ptr_product->get_cost() * get_quantity());
    }

    double get_quantity() const noexcept override {
        return static_cast<double>(m_amount);
    }

private:
    size_t m_amount;
};

#endif //LABA_4_MAY22_AMOUNT_POSITION_HPP
