// ex2_24_storing_lambdas_as_std_function.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {
    std::vector<std::function<std::string(const std::string&)>> vecFilters;
    
    size_t removedSpaceCounter = 0;
    const auto removeSpaces = [&removedSpaceCounter](const std::string& str) { 
        std::string tmp;
        std::copy_if(str.begin(), str.end(), std::back_inserter(tmp), 
                     [](char ch) {return !isspace(ch); });
        removedSpaceCounter += str.length() - tmp.length();
        return tmp;
    };
    
    const auto makeUpperCase = [](const std::string& str) {
        std::string tmp = str;
        std::transform(tmp.begin(), tmp.end(), tmp.begin(),
               [](unsigned char c){ return std::toupper(c); });
        return tmp;
    };
    
    vecFilters.emplace_back(removeSpaces);
    vecFilters.emplace_back([](const std::string& x) { 
                            return x + " Amazing"; });
    vecFilters.emplace_back([](const std::string& x) { 
                            return x + " Modern"; });
    vecFilters.emplace_back([](const std::string& x) { 
                            return x + " C++"; });
    vecFilters.emplace_back([](const std::string& x) { 
                            return x + " World!"; });
    vecFilters.emplace_back(makeUpperCase);
    
    const std::string str = "   H e l l o     ";
    auto temp = str;
    for (const auto &entryFunc : vecFilters)  
        temp = entryFunc(temp);
    std::cout << temp;
    
    std::cout <<"\nremoved spaces: " << removedSpaceCounter << '\n';
}

