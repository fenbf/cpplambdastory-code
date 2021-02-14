// ex6_4_build_bench_with_algorithms.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

// put that as "lambda" on build-bench.com/cpplambda

#include <algorithm>
#include <vector>

int main() {
    const std::vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    const auto more2less6 = std::count_if(v.begin(), v.end(), 
                                      [](int x) { return x > 2 && x < 6;});
        
    return more2less6;                                        
}

// put this as "bind" on build-bench.com

#include <algorithm>
#include <functional>
#include <vector>

int main() {
    using std::placeholders::_1;

    const std::vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    const auto val = std::count_if(v.begin(), v.end(), 
                                   std::bind(std::logical_and<bool>(),
                                   std::bind(std::greater<int>(), _1, 2),
                                   std::bind(std::less<int>(), _1, 6)));
        
    return val;                                        
}


