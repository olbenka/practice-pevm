#include <iostream>
 int main() {
    int n;
    std::cin >> n;
    int d = 1;
    int n_tmp = n;
    while ((n_tmp /= 2) != 0)
        d *= 2;
    while (d != 0) {
        std::cout << (n / d);
        n %= d;
        d /= 2;
    }
    std::cout << std::endl;
    return 0;
 }
