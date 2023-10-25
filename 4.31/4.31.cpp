#include <iostream>

int main() {
	int n = 9;  // 菱形的高度
	int space = n / 2;
	int stars = 1;

	// 上半部分
	for (int i = 0; i < n; i += 2) {
		for (int j = 0; j < space; j++) {
			std::cout << " ";
		}
		for (int j = 0; j < stars; j++) {
			std::cout << "*";
		}
		for (int j = 0; j < space; j++) {
			std::cout << " ";
		}
		std::cout << std::endl;
		space -= 1;
		stars += 2;
	}

	// 下半部分
	space = 1;
	stars = n - 2;
	for (int i = n - 2; i >= 0; i -= 2) {
		for (int j = 0; j < space; j++) {
			std::cout << " ";
		}
		for (int j = 0; j < stars; j++) {
			std::cout << "*";
		}
		for (int j = 0; j < space; j++) {
			std::cout << " ";
		}
		std::cout << std::endl;
		space += 1;
		stars -= 2;
	}

	return 0;
}
