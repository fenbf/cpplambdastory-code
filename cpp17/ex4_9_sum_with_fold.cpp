// ex4_9_sum_with_fold.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

int main() {
    const auto sumLambda = [] (auto... args) {
        std::cout << "sum of: " << sizeof...(args) << " numbers\n";
        return (args + ... + 0);
    };

    std::cout << sumLambda(1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 );
}

