// ex4_17_changing_value_with_atomics.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>
#include <thread>
#include <vector>

int main() {
    std::atomic<int> counter = 0;

    const auto maxThreads = std::thread::hardware_concurrency();
    std::vector<std::thread> threads;
    threads.reserve(maxThreads);
    for (size_t tCounter = 0; tCounter < maxThreads; ++tCounter) {
        threads.push_back(std::thread([&counter]() noexcept {
            for (int i = 0; i < 1000; ++i) {
                counter.fetch_add(1);
                counter.fetch_sub(1);
                counter.fetch_add(1);
                counter.fetch_sub(1);
            }
        }));
    }

    for (auto& thread : threads)
        thread.join();

    std::cout << counter.load() << '\n';
}

