// ex2_9_error_when_capturing.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

struct Baz {
    void foo() {
        const auto lam = [s]() { std::cout << s; };
        lam();
    }
    
    std::string s;
};

int main() {
    Baz b;
    b.foo();
}

