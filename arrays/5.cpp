#include<iostream>

int main() {
    int n;
    std::cin >> n;
    int* a = new int[n];
    int sum = 0;
    int maxsum = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n-1; ++i) {
        sum = a[i] + a[i + 1];
        if (sum > maxsum) maxsum = sum;
        else sum = 0;
    }
    std::cout << maxsum;
    delete[] a;
    return 0;
}
