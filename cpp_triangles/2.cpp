#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int x = n;
    for (int i = 1; i <= n; ++i) {
        for (int z = (x - 1); z >= 1; --z) {
            std::cout << " ";
        }
        --x;
        for (int j = 1; j <= (i * 2 - 1); ++j) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}
