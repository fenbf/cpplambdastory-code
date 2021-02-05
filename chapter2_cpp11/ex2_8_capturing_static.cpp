// ex2_8_capturing_static.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

void bar() {
    static int static_int = 10;
    std::cout << static_int << '\n';
    auto foo = [=]() mutable noexcept{ ++static_int; };
    foo();
    std::cout << static_int << '\n';
    const auto increase = []() noexcept { ++static_int; };
    increase();
    std::cout << static_int << '\n';
    const auto moreIncrease = [static_int]() noexcept { ++static_int; };
    moreIncrease();
    std::cout << static_int << '\n';
}

int main() {
   bar();
}

