// ex2_7_capturing_globals.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

int global = 10;

int main() {
    std::cout << global << '\n';
    auto foo = [=]() mutable noexcept { ++global; };
    foo();
    std::cout << global << '\n';
    const auto increaseGlobal = []() noexcept { ++global; };
    increaseGlobal();
    std::cout << global << '\n';
    const auto moreIncreaseGlobal = [global]() noexcept { ++global; };
    moreIncreaseGlobal();
    std::cout << global << '\n';
}

