#include <iostream>

int main() {
    unsigned char c = 255;
    do {
        std::cout << (int)c << std::endl;
        c -= 1;
    } while (c != 255);
    return 0;
}
