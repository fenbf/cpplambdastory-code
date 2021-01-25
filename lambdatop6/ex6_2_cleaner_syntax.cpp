// ex6_2_cleaner_syntax.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <algorithm>
#include <vector>

int main() {
    const std::vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    const auto val = std::count_if(v.begin(), v.end(), 
                        [](int v) noexcept { return v > 2 && v <= 6;});     
    return val;                                        
}

