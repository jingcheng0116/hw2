#include <iostream>
#include <cmath>

int main() {
	double principal = 5000.0;  
	double annualRate = 0.10; 
	int years = 15;
	int numIterations = 5; 

	for (int i = 1; i <= numIterations; i++) {
		double futureValue = principal * pow(1 + annualRate, years);
		std::cout << "第 " << i << " 次循環：\n";
		std::cout << "本金：" << principal << " 元\n";
		std::cout << "利率：" << (annualRate * 100) << "%\n";
		std::cout << years << " 年的投資金額：" << futureValue << " 元\n";
		std::cout << "------------------------------------\n";

		annualRate += 0.005;
	}

	return 0;
}
