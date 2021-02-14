// ex3_4_capture_with_initialiser.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

int main() {
    int x = 30;
    int y = 12;
    const auto foo = [z = x + y]() { std::cout << z << '\n'; };
    x = 0;
    y = 0;
    foo();
}

