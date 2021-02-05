// ex2_21_inheriting_from_single_lambda.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

template<typename Callable>
class ComplexFn : public Callable {
public:
    explicit ComplexFn(Callable f) : Callable(f) {}
};

template<typename Callable>
ComplexFn<Callable> MakeComplexFunctionObject(Callable&& cal) {
    return ComplexFn<Callable>(std::forward<Callable>(cal));
}

int main() {
    const auto func = MakeComplexFunctionObject([]() { 
        std::cout << "Hello Complex Function Object!"; 
    });
    func();
}

