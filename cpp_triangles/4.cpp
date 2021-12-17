#include <iostream>

int main(){
    int n, l;
    std::cin >> n >> l;
    for (int i = 1; i <= n; ++i){
        for (int m = 1; m <= l; ++m){
            for (int j = 1; j <= n - i; ++j) {
                std::cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; ++k) {
                std::cout << "*";
            }
            for (int j = 1; j <= n - i; ++j) {
                std::cout << " ";
            }
        }
        std::cout << '\n';
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int m = 1; m <= l; ++m) {
            for (int j = 1; j <= n - i; ++j) {
                std::cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; ++k) {
                std::cout << "*";
            }
            for (int j = 1; j <= n - i; ++j) {
                std::cout << " ";
            }
        }
        std::cout << '\n';
    }
    return 0;
}
