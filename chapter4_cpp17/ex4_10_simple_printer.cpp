// ex4_10_simple_printer.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

int main() {
    const auto printer = [] (auto... args) {
         (std::cout << ... << args) << '\n';
    };

    printer(1, 2, 3, "hello", 10.5f);
}

