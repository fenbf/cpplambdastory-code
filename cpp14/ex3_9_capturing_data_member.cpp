// ex3_9_capturing_data_member.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <algorithm>
#include <iostream>

struct Baz {
    auto foo() const {
        return [s=s] { std::cout << s << '\n'; };
    }
    
    std::string s;
};

int main() {
   const auto f1 = Baz{"abc"}.foo();
   const auto f2 = Baz{"xyz"}.foo(); 
   f1();
   f2();
}

