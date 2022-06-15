#pragma once

#include "Amount_Position.hpp"
#include "Weight_Position.hpp"
#include <vector>
#include <iostream>

#ifndef LABA_4_MAY22_ORDER_HPP
#define LABA_4_MAY22_ORDER_HPP

class Order {
public:
    ~Order() {
        clear();
    }

    void add_position(Position *pos) noexcept {
        bool f = true;
        for (size_t i = 0; i < m_ptr_positions.size(); ++i) {
            if (m_ptr_positions[i]->get_ptr_product()->get_info() == pos->get_ptr_product()->get_info()) {
                delete m_ptr_positions[i];
                m_ptr_positions[i] = pos;
                f = false;
                break;
            }
        }
        if (f) {
            m_ptr_positions.push_back(pos);
        }
    }

    double get_cost() noexcept {
        double res = 0;
        for (auto pos: m_ptr_positions) {
            res += pos->get_cost();
        }
        return res;
    }

    void get_info() noexcept {
        for (auto &pos: m_ptr_positions) {
            std::cout << pos->get_ptr_product()->get_info() << std::endl;
            std::cout << "Quantity : " << pos->get_quantity() << std::endl;
            std::cout << "Cost : " << pos->get_cost() << std::endl;
        }
        std::cout << "Total cost : " << get_cost() << std::endl;
    }

    bool empty() noexcept {
        return m_ptr_positions.empty();
    }

    friend class Client;

private:
    void clear() noexcept {
        if (m_ptr_positions.empty()) {
            return;
        }
        for (auto p: m_ptr_positions) {
            delete p;
        }
        m_ptr_positions.clear(); // после удаления элементов в векторе по указателям его размер надо в 0
        // перенести(чтобы работал деструктор нормально и не было двойного освобождения памяти)
    }

    std::vector<Position *> m_ptr_positions;

};

#endif //LABA_4_MAY22_ORDER_HPP
