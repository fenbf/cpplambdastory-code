// ex2_5_capturing_by_copy.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

int main() {
    const auto print = [](const char* str, int x, int y) {
        std::cout << str << ": " << x << " " << y << '\n';
    };
    int x = 1, y = 1;
    print("in main()", x, y);
    auto foo = [x, y, &print]() mutable { 
        ++x; 
        ++y; 
        print("in foo()", x, y); 
    };
    foo();
    print("in main()", x, y);
}

