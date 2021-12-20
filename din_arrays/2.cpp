#include<iostream>
#include<string>

std::string number_to_string(int num) {
	std::string word = "";
	int a = 0;
	if (num < 0) {
		num = num * (-1);
		a = 1;
	}
	while (num != 0) {
		word += (char)48 + num % 10;
		num = num / 10;
	}
	for (int i = 0; i < word.size() / 2; i++) {
		char tmp = word[i];
		word[i] = word[word.size() - 1 - i];
		word[word.size() - 1 - i] = tmp;

	}
	if (a == 1) {
		word = "-" + word;
	}
	return word;
}
std::string left(int num, int sp) {
	std::string res = number_to_string(num);
	int number = 0;
	do {
		++number;
		num /= 10;
	} while (num != 0);
	for (int i = 0; i < sp - number; ++i) {
		res += " ";
	}
	return res;
}

int main() {
	int n, m;
	std::cin >> n >> m;

	int** arr = new int* [m];
	int* sp = new int[m];

	for (int i = 0; i < m; ++i) {
		arr[i] = new int[n];
		int max = 0;
		for (int j = 0; j < n; ++j) {
			arr[i][j] = rand() % 100000;
			if (arr[i][j] > max)
				max = arr[i][j];
		}

		int num_d = 0;

		do {
			++num_d;
			max /= 10;
		} while (max != 0);

		sp[i] = num_d;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)
			std::cout << left(arr[j][i], sp[j]) << " ";
		std::cout << std::endl;
	}

	for (int i = 0; i < m; ++i)
		delete[] arr[i];
	delete[] arr;
	return 0;
}
