#include <iostream>

int main() {
    int start[3];
    int end[3];
    int res[3];

    for (int i = 0; i < 3; ++i) {
        std::cin >> start[i];
    }

    for (int i = 0; i < 3; ++i) {
        std::cin >> end[i];
    }

    for (int i = 0; i < 3; ++i) {
        res[i] = end[i] - start[i];
    }
    for (int i = 1; i < 3; ++i) {
        if (res[i] < 0) {
            res[i - 1] -= 1;
            res[i] += 60;
        }
    }
    for (int i = 0; i < 3; ++i) {
        std::cout << res[i] << " ";
    }
    return 0;
}
