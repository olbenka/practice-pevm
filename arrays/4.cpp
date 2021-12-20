#include <iostream>

int main() {
    int n = 10;
    int A[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for (int i = 0; i < n / 2; i++)
    {
        std::cout << A[i] << ", " << A[n - i - 1] << ", ";
    }
    if (n % 2 == 1)
        std::cout << A[n / 2];

    std::cout << std::endl;

    return 0;
}
