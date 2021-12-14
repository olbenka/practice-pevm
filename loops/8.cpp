#include <iostream>
 int main() {
    int n;
    int sum = 0;
    int prod = 1;
    std::cin >> n;
    while (n != 0) {
        sum += n % 10;
        prod *= n % 10;
        n /= 10;
    }
    std::cout << sum << " " << prod << std::endl;
    return 0;
 }
