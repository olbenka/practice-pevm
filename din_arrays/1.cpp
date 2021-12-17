#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    int a = 1;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = a++;
            }
        }
        else {
            for (int j = m - 1; j >= 0; j--) {
                arr[i][j] = a++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i=0; i<n; ++i){
        delete[] arr[i];
    }
    delete[] = arr;
    return 0;
}
