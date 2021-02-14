// ex5_6_storing_stateless_lambda.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

template <typename F>
struct Product {
    int id {0};
    double price { 0.0};
    F predicate;
};

int main() {
    const auto idCmp = [](const auto& a) noexcept { 
        return a.id != 0; 
    };
    Product p { 10, 10.0, idCmp };
    [[maybe_unused]] auto p2 = p;
}

