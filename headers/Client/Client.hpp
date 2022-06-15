#pragma once
#include "Order.hpp"

#ifndef LABA_4_MAY22_CLIENT_HPP
#define LABA_4_MAY22_CLIENT_HPP

class Client{
public:
    void earn_money(double money){
        m_balance.add_money(money);
    }

    bool pay_and_receive_order(Order& order){
        if(!m_balance.waste_money(order.get_cost())){
            std::cout <<"Not enough money to pay for order!" << std::endl;
            return false;
        }
        std::cout << "The order is received!" << std::endl;
        order.clear();
        return true;
    }
private:
    class Balance{
    public:
        bool waste_money(double money){
            if(m_money >= money){
                m_money -= money;
                return true;
            }
            return false;
        }

        void add_money(double money){
            m_money += money;
        }

    private:
        double m_money = 0;

};
    Balance m_balance;
};
#endif //LABA_4_MAY22_CLIENT_HPP
