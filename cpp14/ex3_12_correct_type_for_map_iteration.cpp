// ex3_12_correct_type_for_map_iteration.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <algorithm>
#include <iostream>
#include <map>
#include <string>

int main() {
    const std::map<std::string, int> numbers { 
        { "one", 1 }, {"two", 2 }, { "three", 3 }
    };
    
    // each time entry is copied from pair<const string, int>!
    std::for_each(std::begin(numbers), std::end(numbers), 
         [](const std::pair<std::string, int>& entry) {
             std::cout << entry.first << " = " << entry.second << '\n';
         }
    );
}

