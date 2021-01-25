// ex5_4_capturing_variadic_pack.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>
#include <memory>

template<class First, class... Args>
void captureTest(First&& first, Args&&... args) {
    const auto printer = [first = std::move(first), 
                          ...capturedArgs = std::move(args)] {
        std::cout << first;
        ((std::cout << ", " << capturedArgs), ...);
        std::cout << '\n';
    };
    printer();
}

int main() {
    auto ptr = std::make_unique<int>(10);
    captureTest(std::move(ptr), 2, 3, 4);
    captureTest(std::move(ptr), 'a', 'b');
}

