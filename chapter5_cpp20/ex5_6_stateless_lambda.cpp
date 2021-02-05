// ex5_6_stateless_lambda.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <set>
#include <string>
#include <iostream>

struct Product {
    std::string name;
    int id {0};
    double price { 0.0};
};

int main() {
    const auto nameCmp = [](const auto& a, const auto& b) { 
        return a.name < b.name; 
    };
    const std::set<Product, decltype(nameCmp)> prodSet { 
        {"Cup", 10, 100.0}, {"Book", 2, 200.5 }, 
        {"TV set", 1, 2000 }, {"Pencil", 4, 10.5}
    };   
    
    for (const auto &elem : prodSet)
        std::cout << elem.name << '\n';
}

