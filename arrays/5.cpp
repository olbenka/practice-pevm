#include <iostream>

int main() {
    int n = 10, sum, max = 0;
    int A[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    sum = A[0] + A[1];

    for (int i = 0; i < n - 1; ++i)
    {
        if (A[i] + A[i + 1] > sum) {
            sum = A[i] + A[i + 1];
            max = i;
        }
    }
    std::cout << A[max] << " " << A[max + 1] << std::endl;

    return 0;
}
