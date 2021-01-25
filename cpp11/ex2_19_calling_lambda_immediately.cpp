// ex2_19_calling_lambda_immediately.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <iostream>

int main() {
   int x = 1, y = 1;
   [&]() noexcept { ++x; ++y; }(); // <-- call ()
   std::cout << x << ", " << y;
}

