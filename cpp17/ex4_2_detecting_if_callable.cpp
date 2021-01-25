// ex4_2_detecting_if_callable.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>
#include <type_traits>

template<typename Callable>
void CallWith10(Callable&& fn) {
    if constexpr (std::is_nothrow_invocable_v<Callable, int>) {
        std::cout << "Calling fn(10) with optimisation\n";
        fn(10);
    }
    else {
        std::cout << "Calling fn(10) normally\n";
        fn(10);
    }
}

int main() {
    int x {10};
    const auto lam = [&x](int y) noexcept { x += y; };
    CallWith10(lam);
    
    const auto lamEx = [&x](int y) { 
        std::cout << "lamEx with x = " << x << '\n';
        x += y; 
    };
    CallWith10(lamEx);
}

