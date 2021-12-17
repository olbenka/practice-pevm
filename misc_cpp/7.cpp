#include <iostream>
#include <cmath>
int main() {
	int R;
	std::cin >> R;
	int sum = 0;
	for (int y = 0; y <= R; ++y) {
		for (int x = 0; x <= R; ++x) {
			if ((x * x + y * y) <= R * R) {
				sum += 1;
			}
		}
	}
	std::cout << sum * 4 - 4 * R;
	return 0;
}
