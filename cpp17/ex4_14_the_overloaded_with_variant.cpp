// ex4_14_the_overloaded_with_variant.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>
#include <variant>

template<class... Ts> struct overloaded : Ts... { using Ts::operator()...; };
template<class... Ts> overloaded(Ts...) -> overloaded<Ts...>;

int main() {
    const auto PrintVisitor = [](const auto& t) { std::cout << t << "\n"; };
    
    std::variant<int, float, std::string> intFloatString { "Hello" };

    std::visit(PrintVisitor, intFloatString);
    
    std::visit(overloaded{
        [](int& i) { i *= 2; },
        [](float& f) { f *= 2.0f; },
        [](std::string& s) { s = s + s; }
    }, intFloatString);
    
    std::visit(PrintVisitor, intFloatString);
}

