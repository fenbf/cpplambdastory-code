// ex1_6_composing_functional_helpers.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <algorithm>
#include <functional>
#include <vector>

int main() {
    using std::placeholders::_1;

    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    const size_t val = std::count_if(v.begin(), v.end(),
                                        std::bind(std::logical_and<bool>(),
                                        std::bind(std::greater<int>(),_1, 2),
                                        std::bind(std::less_equal<int>(),_1,6)));
        
    return val;                                        
}

