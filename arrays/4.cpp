#include<iostream>

int main() {
    int n;
    std::cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    if (n % 2 == 0) {
        for (int i = 0; i < n / 2; ++i) {
            std::cout << a[i] << a[n - 1 - i];
        }
    }
    else {
        int k = n - n / 2 - 1;
        for (int i = 0; i < n/2; ++i) {
            std::cout << a[i] << a[n - 1 - i];
        }
        std::cout << a[k];
    }
    return 0;
}
