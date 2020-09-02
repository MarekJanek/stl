#include "arithmeticAverage.hpp"

#include <functional>
#include <iostream>
float ArithmeticAverage(const std::vector<int>& first, const std::vector<int>& second) {
    return (float)std::inner_product(first.cbegin(), first.cend(), second.cbegin(), 0, std::plus<int>(), std::plus<int>()) / (first.size() + second.size());
}

float Distance(const std::vector<int>& first, const std::vector<int>& second) {
    return sqrt(std::inner_product(first.cbegin(), first.cend(), second.cbegin(), 0, std::plus<int>(), OneD));
}

int OneD(const int first, const int second) {
    return pow((first - second), 2);
}