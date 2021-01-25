// ex2_11_preserving_const.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>
#include <type_traits>

int main() {
    const int x = 10;
    auto foo = [x] () mutable { 
        std::cout << std::is_const<decltype(x)>::value << '\n';
        x = 11;
    };
    foo();
}

