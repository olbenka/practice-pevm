#include <iostream>
#include <cmath>
int main() {
	const float height = 21.;
	const float	width = 41.;
	for (float y = -1.5; y <= 1.5; y += 3. / height) {
		for (float x = -1.5; x <= 1.5; x += 3. / width) {
			float f = pow(x * x + y * y - 1, 3) - x * x * y * y * y;
			if (f <= 0) {
				std::cout << "*";
			}
			else {
				std::cout << ".";
			}
		}
		std::cout << std::endl;
	}
}
