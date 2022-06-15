#include "Amount_Position.hpp"
#include "Weight_Position.hpp"
#include "Order.hpp"
#include "Client.hpp"
#include "Price_Base.hpp"
#include <iostream>
#include <memory>

int main() {
    Order o;
    std::cout << o.empty() << std::endl;
    // 0.5 kg apple + 2 pencils
    Position* p1 = new WeightPosition(PriceBase::Instance().get_product_weight_price("Apple"),0.5);
    Position* p2 = new AmountPosition(PriceBase::Instance().get_product_amount_price("Pencil"),2);
    o.add_position(p1);
    o.add_position(p2);
    o.get_info();
    // 1.5 kg apple
    Position* p3 = new WeightPosition(PriceBase::Instance().get_product_weight_price("Apple"),1.5);
    o.add_position(p3);
    o.get_info();
    Client Ivan;
    Ivan.pay_and_receive_order(o);
    Ivan.earn_money(500);
    Ivan.pay_and_receive_order(o);
    return 0;
}
