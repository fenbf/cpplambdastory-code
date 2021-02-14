// ex3_20_recursive_lambda_with_internal_impl.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

int main() {
    const auto factorial = [](int n) noexcept {
        const auto f_impl = [](int n, const auto& impl) noexcept -> int {
            return n > 1 ? n * impl(n - 1, impl) : 1;
        };
        return f_impl(n, f_impl);
    };
    return factorial(5);
}

