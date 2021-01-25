// ex4_16_updating_shared_variable.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>
#include <thread>
#include <vector>

int main() {
    int counter = 0;

    const auto maxThreads = std::thread::hardware_concurrency();
    std::vector<std::thread> threads;
    threads.reserve(maxThreads);
    for (size_t tCounter = 0; tCounter < maxThreads; ++tCounter) {
        threads.push_back(std::thread([&counter]() noexcept {
            for (int i = 0; i < 1000; ++i) {
                ++counter;
                --counter;
                ++counter;
                --counter;
            }
        }));
    }

    for (auto& thread : threads)
        thread.join();

    std::cout << counter << '\n';
}

