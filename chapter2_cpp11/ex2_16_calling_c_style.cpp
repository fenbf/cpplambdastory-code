// ex2_16_calling_c_style.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <cstdlib> 
#include <iostream>

int main () {
    int values[] = { 8, 9, 2, 5, 1, 4, 7, 3, 6 };
    constexpr size_t numElements = sizeof(values)/sizeof(values[0]);
    
    std::qsort(values, numElements, sizeof(int), 
         [](const void* a, const void* b) noexcept {
             return ( *(int*)b - *(int*)a );
         }
    );
  
    for (const auto& val : values)
        std::cout << val << ", ";
}

