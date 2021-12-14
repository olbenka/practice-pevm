#include <iostream>
int main() {
	int R;
	std::cin >> R;
	int sum = 0;
	for (int y = -(int)R; y <= (int)R; y += 1)
	{
		for (int x = -(int)R; x <= (int)R; x += 1)
		{
			if ((x * x + y * y) <= R * R)
			{
				++sum;
			}
		}
	}
	std::cout << sum;
	return 0;
}
