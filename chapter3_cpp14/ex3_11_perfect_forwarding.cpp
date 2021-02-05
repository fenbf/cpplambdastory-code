// ex3_11_perfect_forwarding.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>
#include <string>

void foo(const std::string& ) { std::cout << "foo(const string&)\n"; }
void foo(std::string&& ) { std::cout << "foo(string&&)\n"; }

int main() {
    const auto callFoo = [](auto &&str) {
        std::cout << "Calling foo() on: " << str << '\n';
        foo(std::forward<decltype(str)>(str));
    };
            
    const std::string str = "Hello World";
    callFoo(str);
    callFoo("Hello World Ref Ref");
}

