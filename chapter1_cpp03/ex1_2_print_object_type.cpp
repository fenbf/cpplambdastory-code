// ex1_2_print_object_type.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <algorithm>
#include <iostream>
#include <vector>

struct Printer {
    void operator()(int x) const {
        std::cout << x << '\n';
    }
};

int main() {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2); // no initialiser list in C++98/03...
    std::for_each(v.begin(), v.end(), Printer());   
}

