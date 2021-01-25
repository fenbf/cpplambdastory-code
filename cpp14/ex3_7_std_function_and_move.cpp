// ex3_7_std_function_and_move.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <memory>
#include <functional>

int main() {
    std::unique_ptr<int> p(new int{10});
    std::function<void()> func = [ptr = std::move(p)]() { };  // won't compile
}

