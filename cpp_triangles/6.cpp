#include <iostream>

int main(){
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2 * n + 1; j++){
            if (j == n - i || j == n + i)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << '\n';
    }

    for (int i = n; i >= 0; i--){
        for (int j = 0; j < 2 * n + 1; j++){
            if (j == n - i || j == n + i)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << '\n';
    }
    return 0;
}
