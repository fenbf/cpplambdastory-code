// ex2_23_storing_lambdas_as_function_pointers.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>
#include <vector>

int main() {
    using TFunc = void (*)(int&);
    std::vector<TFunc> ptrFuncVec;
    
    ptrFuncVec.push_back([](int& x) { std::cout << x << '\n'; });
    ptrFuncVec.push_back([](int& x) { x *= 2; });
    ptrFuncVec.push_back(ptrFuncVec[0]); // print it again;
    
    int x = 10;
    for (const auto &entry : ptrFuncVec)
        entry(x);
}

