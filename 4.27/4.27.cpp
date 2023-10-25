#include <iostream>

int main() {
	int n;  // 設定一個上限n，找出所有小於n的勾股數組

	std::cout << "請輸入一個正整數上限 n：";
	std::cin >> n;

	for (int a = 1; a <= n; ++a) {
		for (int b = a + 1; b <= n; ++b) {
			for (int c = b + 1; c <= n; ++c) {
				if (a * a + b * b == c * c) {
					std::cout << "勾股數組： " << a << ", " << b << ", " << c << std::endl;
				}
			}
		}
	}

	return 0;
}
