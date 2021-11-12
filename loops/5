#include <iostream>
#include <cmath>
int main() 
{
    double x1, x2, dx, eps;
    int counter = 1;

    std::cin >> x1>>x2>>dx>>eps;
    std::cout << "x\tf(x)\tsin(x)\n";
    for (; x1 <= x2; x1 += dx) {
        double curr =x1;
        double summ = 0;
        while (std::abs(curr) >= eps) {
            summ += curr;
            counter += 2;
            curr = -1 * curr * x1 * x1 / (counter * (counter - 1));
        }
        std::cout << summ << "\t" << sin(x1) << "\n";
    }
    return 0;
}
