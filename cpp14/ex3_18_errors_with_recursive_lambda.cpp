// ex3_18_errors_with_recursive_lambda.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

// this doesn't compile, intentionally
int main() {
    auto factorial = [](int n) {
        return n > 1 ? n * factorial(n - 1) : 1;
    };
    return factorial(5);
}

