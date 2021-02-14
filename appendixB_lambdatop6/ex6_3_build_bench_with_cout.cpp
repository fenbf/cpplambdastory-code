// ex6_3_build_bench_with_cout.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

// put that as "lambda" on build-bench.com/cpplambda

#include <iostream>

int sum3(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int x = 10;
    auto sum2 = [x](int a, int b) { return sum3(x, a, b);};
    std::cout << sum2(10, 10);
}

// put this as "bind" on build-bench.com

#include <functional>
#include <iostream>

int sum3(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int x = 10;
    auto sum2 = std::bind(sum3, std::placeholders::_1, std::placeholders::_2, x);
    std::cout << sum2(10, 10);
}


