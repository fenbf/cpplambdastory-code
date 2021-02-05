// ex4_5_capturing_constexpr.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

constexpr int add(int const& t, int const& u) { return t + u; }

int main() {
    constexpr int x = 0;
    constexpr auto lam = [x](int n) { return add(x, n); };
    
    static_assert(lam(10) == 10);
}

