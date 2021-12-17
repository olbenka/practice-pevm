#include <iostream>
#include <cmath>

int main() {
	double a, b, c;
	std::cin >> a >> b >> c>> x1 >> x2;
	double d = b * b - 4 * a * c;
    if (a == 0) {
        std::cout << -(c / b);
    }
    else {
        if (d > 0)
        {
            x1 = ((-b) + sqrt(d)) / (2 * a);
            x2 = ((-b) - sqrt(d)) / (2 * a);
            std::cout << "two solutions: " << x1 << "," << x2 << "\n";
        }
        if (d == 0)
        {
            x1 = -(b / (2 * a));
            std::cout << "one solution:" << x1 << "\n";
        }
        if (d < 0)
            std::cout << "no real solutions";
	return 0;
}
