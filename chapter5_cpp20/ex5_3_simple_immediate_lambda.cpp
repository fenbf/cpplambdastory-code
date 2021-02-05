// ex5_3_simple_immediate_lambda.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

int main() {
    const int x = 10;
    auto lam = [](int x) consteval { return x + x; };
    return lam(x);
}

