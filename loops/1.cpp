#include <iostream>
#include <cmath>
int main() {
    int n;
    double s = 0;
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        s += (1. / i);
    }
    std::cout << s << std::endl;
    return 0;
}
