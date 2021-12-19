#include<iostream>

int main() {
    int N;
    int A[1000];
    std::cin >> N;
    for (int i = 1; i <= N; ++i) {
        std::cin >> i[A];
    }
    int k = 1;
    int r = A[2] - A[1];
    for (int i = 1; i < N; ++i) {
        if ((A[i + 1] - A[i]) != r) {
            k = 0;
            break;
        }
    }
    if (k == 1) {
        std::cout << r;
    }
    else {
        std::cout << 0;
    }
    return 0;
}
