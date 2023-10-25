#include <iostream>
#include <string>
using namespace std;

int main() {
	int jobCode;
	double salary = 0;

	cout << "請輸入工作代碼 (1=經理, 2=小時工, 3=定時工, 4=雇傭人員): ";
	cin >> jobCode;

	if (jobCode == 1) {
		// 經理
		salary = 50000; // 假設經理的固定工資是50000元
	}
	else if (jobCode == 2) {
		// 小時工
		double hourlyRate;
		int hoursWorked;

		cout << "請輸入小時工資: ";
		cin >> hourlyRate;
		cout << "請輸入工作小時數: ";
		cin >> hoursWorked;

		if (hoursWorked <= 40) {
			salary = hourlyRate * hoursWorked;
		}
		else {
			salary = hourlyRate * 40; // 前40小時的工資
		}
	}
	else if (jobCode == 3) {
		// 定時工
		double hourlyRate;
		int hoursWorked;

		cout << "請輸入小時工資: ";
		cin >> hourlyRate;
		cout << "請輸入工作小時數: ";
		cin >> hoursWorked;

		salary = hourlyRate * hoursWorked * 1.5; // 1.5倍小時工資
	}
	else if (jobCode == 4) {
		// 雇傭人員
		double totalSales;

		cout << "請輸入本週總銷售額: ";
		cin >> totalSales;

		salary = 250 + (totalSales * 0.057); // 固定工資250元 + 銷售額的5.7%
	}
	else {
		cout << "無效的工作代碼" << endl;
		return 1;
	}

	cout << "薪資為: " << salary << "元" << endl;

	return 0;
}
