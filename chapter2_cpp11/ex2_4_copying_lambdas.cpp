// ex2_4_copying_lambdas.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <type_traits>

int main() {   
    const auto firstLam = [](int x) noexcept { return x * 2; };
    const auto secondLam = firstLam;  
    static_assert(std::is_same<decltype(firstLam), decltype(secondLam)>::value, 
                  "must be the same");
}

