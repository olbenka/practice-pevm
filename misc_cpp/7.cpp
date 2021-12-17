#include <iostream>
int main() {
	int R;
	std::cin >> R;
	long long sum = -1;
	for (int y = 0; y <= R; ++y) {
		for (int x = 0; x <= R; ++x) {
			if ((x * x + y * y) <= R * R) {
				sum += 1;
			}
		}
	}
	std::cout << 1 + sum * 4 - 4 * R;
	return 0;
}
