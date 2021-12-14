#include <iostream>

int main() {
    int x;
    int n;
    std::cin >> x >> n;
    int res = 0;
    int a = 1;

    if (n > 10) {
        while (x) {
            a = 1;
            int x1 = x;
            while (x1 >= n) {
                x1 /= n;
                a *= n;
            }
            x -= a * x1;
            switch (x1) {
            case 10: std::cout << "A"; break;
            case 11: std::cout << "B"; break;
            case 12: std::cout << "C"; break;
            case 13: std::cout << "D"; break;
            case 14: std::cout << "E"; break;
            case 15: std::cout << "F"; break;
            default: std::cout << x1; break;
            }
        }
    }
    else if (n == 10) std::cout << x;
    else {
        while (x) {
            res += a * (x % n);
            a *= 10;
            x /= n;
        }
        std::cout << res;
    }
    
    

    return 0;
}
