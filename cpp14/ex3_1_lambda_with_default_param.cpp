// ex3_1_lambda_with_default_param.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

int main() {
    const auto lam = [](int x = 10) { std::cout << x << '\n'; };
    lam();
    lam(100);
}

