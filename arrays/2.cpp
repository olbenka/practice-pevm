#include <iostream>

int main() {
	int N, sum = 0;
	double x;
	std::cin >> N >> x;
	double b = 1;
	int* a = new int[N + 1];
	for (int i = 0; i <= N; ++i){
		std::cout << i << "|";
		std::cin >> a[i];
		sum += a[i] * b;
		b *= x;
	}
	std::cout << sum << std::endl;
        delete[] a;
	return 0;
}
