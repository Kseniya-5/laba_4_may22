#pragma once

#include <string>
#include <utility>

#ifndef LABA_4_MAY22_PRODUCT_INFO_HPP
#define LABA_4_MAY22_PRODUCT_INFO_HPP

class ProductInfo {
public:
    ProductInfo() {}

    ProductInfo(const std::string &info) : m_info(info) {}

    std::string get_info() const {
        return m_info;
    }

private:
    std::string m_info;
};

#endif //LABA_4_MAY22_PRODUCT_INFO_HPP
