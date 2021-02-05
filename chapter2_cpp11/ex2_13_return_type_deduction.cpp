// ex2_13_return_type_deduction.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <type_traits>

int main() {
    const auto baz = [](int x) noexcept {
        if (x < 20) 
            return x * 1.1; 
        else
            return x * 2.1;
    };
    static_assert(std::is_same<double, decltype(baz(10))>::value, 
                  "has to be the same!");
}

