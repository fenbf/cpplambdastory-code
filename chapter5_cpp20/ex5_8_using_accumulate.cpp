// ex5_8_using_accumulate.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <array>
#include <numeric>

int main() {
    constexpr std::array arr{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    // with constexpr lambda
    static_assert(std::accumulate(begin(arr), end(arr), 0, 
        [](auto a, auto b) noexcept { 
            return a + b; 
        }) == 55);    
    return arr[0];
}

