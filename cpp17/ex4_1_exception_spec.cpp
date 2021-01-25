// ex4_1_exception_spec.cpp
// example for "C++ Lambda Story"
// https://leanpub.com/cpplambda
// by Bartlomiej Filipek
// 2021
// Creative Commons Licence

using TNoexceptVoidFunc = void (*)() noexcept;
void SimpleNoexceptCall(TNoexceptVoidFunc f) { f(); }

using TVoidFunc = void (*)();
void SimpleCall(TVoidFunc f) { f(); }

void fNoexcept() noexcept { }
void fRegular() { }

int main() {
    SimpleNoexceptCall(fNoexcept);
    SimpleNoexceptCall([]() noexcept { });
    // SimpleNoexceptCall(fRegular);   // cannot convert
    // SimpleNoexceptCall([]() { });  // cannot convert
    
    SimpleCall(fNoexcept); // converts to regular function
    SimpleCall(fRegular);
    SimpleCall([]() noexcept { });  // converts
    SimpleCall([]() { });   
}

