#include<iostream>

int main() {
    int n;
    std::cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int d = a[1] - a[0];
    bool k = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i + 1] - a[i] == d) {
            k = 1;
        }
        else k = 0;
    }
    if (k == 1) {
        std::cout << d << std::endl;
    }
    else {
        std::cout << 0;
    }
    delete[] a;
    return 0;
}
