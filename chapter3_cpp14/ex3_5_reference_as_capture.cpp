// ex3_5_reference_as_capture.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

int main() {
    int x = 30;
    const auto foo = [&z = x]() { std::cout << z << '\n'; };
    foo();
    x = 0;
    foo();
}

