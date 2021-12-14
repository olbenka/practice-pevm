#include <iostream>
#include <cmath>

int main() {
    float x, eps;
    std::cin >> x;
    std::cin >> eps;
    float a = 1;
    float sum = 0;
    while (abs(a) > abs(eps)) {
        sum += a;
        a *= x;
    }
    std::cout << sum << std::endl;
    std::cout << 1 / (1 - x);
    return 0;
}
