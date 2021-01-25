// ex4_19_copying_into_vector_danger.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>
#include <vector>
#include <numeric>
#include <execution>

int main() {
    std::vector<int> vec(1000);
    std::iota(vec.begin(), vec.end(), 0);
    std::vector<int> output;
    std::for_each(std::execution::par, vec.begin(), vec.end(),
        [&output](int& elem) {
            if (elem % 2 == 0) {
            output.push_back(elem);
        }
    });

    for (const auto& elem : output)
        std::cout << elem << ", ";
}

