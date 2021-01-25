// ex2_14_returning_a_string_literal_err.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

// this code doesn't compile, intentionally

#include <iostream>
#include <string>

int main() {
    const auto testSpeedString = [](int speed) noexcept {
        if (speed > 100)
            return "you're a super fast";

        return "you're a regular";
    };

    auto str = testSpeedString(100);
    str += " driver";                     // oops! no += on const char*!

    std::cout << str;

    return 0;
}

