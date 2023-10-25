#include <iostream>

int main() {
	// 定義變數來存儲輸入數據
	char account[50];
	double initialBalance, totalIncome, totalCredit, availableCredit;

	// 提示用戶輸入帳戶信息
	std::cout << "請輸入帳戶：";
	std::cin.getline(account, sizeof(account));

	// 提示用戶輸入月初餘額
	std::cout << "請輸入月初餘額：";
	std::cin >> initialBalance;

	// 提示用戶輸入本月總收入
	std::cout << "請輸入本月總收入：";
	std::cin >> totalIncome;

	// 提示用戶輸入總信用額
	std::cout << "請輸入總信用額：";
	std::cin >> totalCredit;

	// 計算可用信用額度
	availableCredit = initialBalance + totalIncome - totalCredit;

	// 顯示計算結果
	std::cout << "帳戶：" << account << std::endl;
	std::cout << "可用信用額度：" << availableCredit << std::endl;

	return 0;
}
