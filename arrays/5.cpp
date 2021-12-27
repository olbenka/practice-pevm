#include<iostream>

int main() {
    int n;
    std::cin >> n;
    int* a = new int[n];
    int sum = 0;
    int maxsum = 0;
    int a1 = 0;
    int a2 = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n-1; ++i) {
        sum = a[i] + a[i + 1];
        if (sum > maxsum) {
            maxsum = sum;
            a1 = a[i];
            a2 = a[i + 1];
        }
        else {
            sum = 0;
            a1 = 0;
            a2 = 0;
        }
    }
    std::cout << a1 << " + " << a2 << " = " << maxsum;
    delete[] a;
    return 0;
}
