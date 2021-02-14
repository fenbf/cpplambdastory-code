// ex3_3_auto_return_type_deduction.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

auto CreateMulLambda(int x) noexcept {
    return [x](int param) noexcept { return x * param; };
}

int main() {
    const auto lam = CreateMulLambda(10);
    
    std::cout << sizeof(lam);
    
    return lam(2);
}

