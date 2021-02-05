// ex2_15_conversion_to_a_function_pointer.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

void callWith10(void(* bar)(int)) {
    bar(10);
}

int main() {
    struct {
        using f_ptr = void(*)(int);
        
        void operator()(int s) const { return call(s); }
        operator f_ptr() const { return &call; }
        
    private:
        static void call(int s) { std::cout << s << '\n'; };
    } baz;
    
    callWith10(baz);
    callWith10([](int x) { std::cout << x << '\n'; });
}

