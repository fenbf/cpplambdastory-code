// ex4_6_capturing_this.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

struct Baz {
    auto foo() {
        return [*this] { std::cout << s << '\n'; };
    }
    
    std::string s;
};

int main() {
   const auto f1 = Baz{"xyz"}.foo();
   const auto f2 = Baz{"abc"}.foo(); 
   f1();
   f2();
}

