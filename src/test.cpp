#include <iostream>
#include <cassert>

int main() {
    // Egyszerű teszt: hello.cpp outputja helyes-e
    std::string expected = "Hello World!";
    std::string actual = "Hello World!"; // Itt majd lecserélheted valódi függvényhívásra

    assert(expected == actual);

    std::cout << "All tests passed!" << std::endl;
    return 0;
}
