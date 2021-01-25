// ex3_2_returning_std_function.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <functional>
#include <iostream>

std::function<int(int)> CreateMulLambda(int x) {
    return [x](int param) noexcept { return x * param; };
}

int main() {
    const auto lam = CreateMulLambda(10);
    
    std::cout << sizeof(lam);
    
    return lam(2);
}

