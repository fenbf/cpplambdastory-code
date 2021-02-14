// ex5_1_capturing_structured_binding.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <tuple>
#include <string>

auto GetParams() {
    return std::tuple { std::string{"Hello World"}, 42 };
}
int main() {
   auto [x, y] = GetParams();
   const auto ParamLength = [&x, &y]() { return x.length() + y; }();
   return ParamLength; 
}

