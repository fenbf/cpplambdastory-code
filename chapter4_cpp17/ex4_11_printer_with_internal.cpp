// ex4_11_printer_with_internal.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

int main() {
    const auto printer = [] (auto... args) {
        const auto printElem = [](auto elem) {
            std::cout << elem << ", ";
        };
        (printElem(args), ...);
        std::cout << '\n';
    };

    printer(1, 2, 3, "hello", 10.5f);
}

