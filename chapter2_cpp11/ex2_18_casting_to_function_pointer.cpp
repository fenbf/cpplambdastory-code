// ex2_18_casting_to_function_pointer.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

template<typename F>
void call_function(F f) {
  f(10);
}

int main() {
    call_function(static_cast<int (*)(int)>([](int x){ 
        return x + 2; })); 
    call_function(static_cast<int (*)(int)>([](int x){ 
        return x * 2; })); 
}

