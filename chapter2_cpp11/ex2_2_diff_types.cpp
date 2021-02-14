// ex2_2_diff_types.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <type_traits>

int main() {   
    const auto oneLam = [](int x) noexcept { return x * 2; };
    const auto twoLam = [](int x) noexcept { return x * 2; };
    static_assert(!std::is_same<decltype(oneLam), decltype(twoLam)>::value, 
                  "must be different!");
}

