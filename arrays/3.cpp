#include<iostream>

int main() {
    int n;
    char str16[1000];
    int k = 0;
    std::cout << "Input 10 number: ";
    std::cin >> n;
    while (n != 0) {
        k = k + 1;
        if ((n % 16) < 10)
            str16[k] = '0' + n % 16;
        else
            str16[k] = char((n % 16) + 55);
        n = n / 16;
    }
    std::cout << "Number in 16 = ";
    for (int i = k; i >= 1; --i)
        std::cout << str16[i];
    std::cout << "\n";
    std::string str10;
    std::cout << "Input 16 number: ";
    std::cin >> str10;
    int a = 0;
    for (int i = 0; i < str10.length(); ++i) {
        if (str10[i] >= 'A') {
            str10[i] = str10[i] - 55;
            a += int(str10[i]) * pow(16, str10.length() - (i + 1));
        }
        else
            a += (str10[i] - '0') * pow(16, str10.length() - (i + 1));
    }
    std::cout << "Number in 10 = " << a;
    return 0;
}
