#include <iostream>
int main() {
    double eps;
    double a = 1;
    double b = 1;
    double s = 0;
    double sum = 0;
    std::cin >> eps;
    do {
        s = b * (1 / (2 * a - 1));
        a += 1;
        b *= -1;
        sum += 4*s;
    } while (4 * std::abs(s) >= std::abs(eps));
    std::cout << sum << std::endl;
    return 0;
}
