// ex3_6_capturing_movable.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>
#include <memory>

int main(){
    std::unique_ptr<int> p(new int{10});
    const auto bar = [ptr=std::move(p)] {
        std::cout << "pointer in lambda: " << ptr.get() << '\n';
    };
    std::cout << "pointer in main(): " << p.get() << '\n';
    bar();
}

