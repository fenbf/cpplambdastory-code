// ex4_3_constexpr_lambda_accumulate.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <array>

template<typename Range, typename Func, typename T>
constexpr T SimpleAccumulate(Range&& range, Func func, T init) {
    for (auto &&elem: range) {
        init += func(elem);
    }
    return init;
}

int main() {
    constexpr std::array arr{ 1, 2, 3 };
    
    constexpr auto sum = SimpleAccumulate(arr, [](auto i) { 
            return i * i; 
        }, 0);
    
    static_assert(sum == 14);
}

