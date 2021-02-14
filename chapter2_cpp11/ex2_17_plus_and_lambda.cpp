// ex2_17_plus_and_lambda.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

#include <type_traits>

int main() {
	auto funcPtr = +[]{};
	static_assert(std::is_same<decltype(funcPtr), void (*)()>::value);
}

