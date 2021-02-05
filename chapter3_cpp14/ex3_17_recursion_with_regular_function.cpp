// ex3_17_recursion_with_regular_function.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

int factorial(int n) {
    return n > 1 ? n * factorial(n - 1) : 1;
}

int main() {
    return factorial(5);
}

