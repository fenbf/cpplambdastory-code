// ex2_3_std_function_and auto.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <functional>
#include <iostream>

int main() {
    const auto myLambda = [](int a) noexcept -> double { 
        return 2.0 * a; 
    };
    
    const std::function<double(int)> myFunc = 
        [](int a) noexcept -> double { 
            return 2.0 * a; 
        };
    
    std::cout << "sizeof(myLambda) is " << sizeof(myLambda) << '\n';
    std::cout << "sizeof(myFunc) is " << sizeof(myFunc) << '\n';
    
    return myLambda(10) == myFunc(10);
}

