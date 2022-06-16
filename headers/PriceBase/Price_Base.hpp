#pragma once

#include "Product_Info.hpp"
#include "Weight_Product.hpp"
#include "Amount_Product.hpp"
#include <map>

#ifndef LABA_4_MAY22_PRICE_BASE_HPP
#define LABA_4_MAY22_PRICE_BASE_HPP

class PriceBase {
public:
    static PriceBase &Instance() {
        static PriceBase a;
        return a;
    }

    WeightProduct get_product_weight_price(const std::string &name) const{
        if (m_products_weight_price.count(name) == 0) {
            throw std::invalid_argument("Incorrect name of product");
        }
        return m_products_weight_price.at(name);
    }

    AmountProduct get_product_amount_price(const std::string &name) const{
        if (m_products_amount_price.count(name) == 0) {
            throw std::invalid_argument("Incorrect name of product");
        }
        return m_products_amount_price.at(name);
    }

protected:
    PriceBase(){
        m_products_info = {
                {"Apple",  ProductInfo("Green sweet apple")},
                {"Nuts",   ProductInfo("Macadamia nut")},
                {"Pencil", ProductInfo("Red pencil with rubber")},
                {"Chair",  ProductInfo("Wooden chair with armrests")},
        };
        m_products_weight_price = {
                {"Apple", WeightProduct(m_products_info.at("Apple"), 11.3)},
                {"Nuts",  WeightProduct(m_products_info.at("Nuts"), 34.2)},
        };
        m_products_amount_price = {
                {"Pencil", AmountProduct(m_products_info.at("Pencil"), 5.7)},
                {"Chair",  AmountProduct(m_products_info.at("Chair"), 75)},
        };
    }

    PriceBase(const PriceBase &pb) = delete;

    PriceBase &operator=(const PriceBase &pb) = delete;

private:
    std::map<std::string, ProductInfo> m_products_info;
    std::map<std::string, WeightProduct> m_products_weight_price;
    std::map<std::string, AmountProduct> m_products_amount_price;
};

#endif //LABA_4_MAY22_PRICE_BASE_HPP
