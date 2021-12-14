#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int maxx = 1;
    int count = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = n * 3 + 1;
        }
        if (n > maxx) {
            maxx = n;
        }
        ++count;
     }
    std::cout << count << " " << maxx;
    return 0;
}
