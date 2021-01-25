// ex4_18_invoking_code_std_async.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>
#include <future>  // for async and future
#include <vector>
#include <numeric> // for std::iota

int main() {
    const auto printThreadID = [](const char* str) {
        std::cout << str << ": " 
                  << std::this_thread::get_id() << " thread id\n";  
    };
    
    std::vector<int> numbers(100);

    std::future<void> iotaFuture = std::async(std::launch::async, 
    [&numbers, startArg = 10, &printThreadID]() {
            std::iota(numbers.begin(), numbers.end(), startArg);
            printThreadID("iota in");
        }
    );

    iotaFuture.get(); // make sure we get the results...
    printThreadID("printing numbers in");
    for (const auto& num : numbers)
        std::cout << num << ", ";
}

