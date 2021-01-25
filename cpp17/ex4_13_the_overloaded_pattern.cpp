// ex4_13_the_overloaded_pattern.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

template<class... Ts> struct overloaded : Ts... { using Ts::operator()...; };
template<class... Ts> overloaded(Ts...) -> overloaded<Ts...>;

int main() {
    const auto test = overloaded{
        [](const int& i) { std::cout << "int: " << i << '\n'; },
        [](const float& f) { std::cout << "float: " << f << '\n'; },
        [](const std::string& s) { std::cout << "string: " << s << '\n'; }
    };

    test("10.0f");
}

