// ex2_10_returning_a_lambda.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <functional>
#include <iostream>

struct Baz {
    std::function<void()> foo() {
        return [=] { std::cout << s << '\n'; };
    }
    
    std::string s;
};

int main() {
   auto f1 = Baz{"abc"}.foo();
   auto f2 = Baz{"xyz"}.foo(); 
   f1();
   f2();
}

