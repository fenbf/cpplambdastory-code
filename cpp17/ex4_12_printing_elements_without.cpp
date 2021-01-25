// ex4_12_printing_elements_without.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

int main() {
    const auto printer = [] (auto first, auto... args) {
        std::cout << first;
        ((std::cout << ", " << args), ...);
        std::cout << '\n';
    };

    printer(1, 2, 3, "hello", 10.5f);
}

