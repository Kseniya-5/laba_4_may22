#pragma once

#include <string>
#include <utility>

#ifndef LABA_4_MAY22_PRODUCT_INFO_HPP
#define LABA_4_MAY22_PRODUCT_INFO_HPP

class ProductInfo {
public:
    ProductInfo() {}

    ProductInfo(const std::string &info) noexcept: m_info(info) {}

    const std::string & get_info() const noexcept {
        return m_info;
    }

private:
    std::string m_info;
};

#endif //LABA_4_MAY22_PRODUCT_INFO_HPP
