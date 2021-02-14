// ex1_4_function_object_capture.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct PrinterEx {
    PrintEx(const std::string& str): 
        strText(str), numCalls(0) { }
    
    void operator()(int x) {
        std::cout << strText << x << '\n';
        ++numCalls;
    }
    
    std::string strText;
    int numCalls;
};

int main() {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    const std::string introText("Elem: ");
    const PrinterEx vis = std::for_each(v.begin(), v.end(), 
                                        PrinterEx(introText));
    std::cout << "num calls: " << vis.numCalls << '\n';
}

