#include <iostream>

int main() {
	float x, y, R, r;
	std::cout << "x, y, R, r" << std::endl;
	std::cin >> x >> y >> R>> r;
	int a = x * x + y * y;
	if ((a < R * R) && (a > r * r)){
		std::cout << "in";
	}
	else {
		std::cout << "out";
	}
    return 0;
}
