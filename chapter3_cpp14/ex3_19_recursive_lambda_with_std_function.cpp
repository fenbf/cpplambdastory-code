// ex3_19_recursive_lambda_with_std_function.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <functional>

int main() {
    const std::function<int(int)> factorial = [&factorial](int n) {
        return n > 1 ? n * factorial(n - 1) : 1;
    };
    return factorial(5);
}

