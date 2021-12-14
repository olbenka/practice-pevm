#include <iostream>
#include <cmath>

int main() {
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 != 0 and i % 5 != 0) {
            std::cout << i << std::endl;
        } else if (i % 3 == 0 and i % 5 != 0) {
            std::cout << "Foo" << std::endl;
        } else if (i % 3 != 0 and i % 5 == 0) {
            std::cout << "Bar" << std::endl;
        } else {
            std::cout << "FooBar" << std::endl;
        }
    }
    return 0;
}
