#include <iostream>

int main() {
    float a, b, c, d, x;
    std::cout << "a,b,c,d,x" << std::endl;
    std::cin >> a >> b >> c >> d >> x;
    float y = 0;
    y = c + (x - a) * (d - c) / (b - a);
    std::cout << y;
    return 0;
}
