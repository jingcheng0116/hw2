#include <iostream>

int main() {
	int length = 3;
	int width = 12;

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 || i == length - 1 || j == 0 || j == width - 1) {
				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}

	return 0;
}
