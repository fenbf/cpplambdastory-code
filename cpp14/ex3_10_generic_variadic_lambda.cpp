// ex3_10_generic_variadic_lambda.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

template<typename T>
auto sum(T x) { return x; }

template<typename T1, typename... T>
auto sum(T1 s, T... ts) { return s + sum(ts...); }

int main() {
    const auto sumLambda = [] (auto... args) {
        std::cout << "sum of: " << sizeof...(args) << " numbers\n";
        return sum(args...);
    };

    std::cout << sumLambda(1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 );
}

