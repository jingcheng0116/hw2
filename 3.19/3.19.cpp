#include <iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "zh_TW");

	int numLoans;
	cout << "請輸入貸款筆數：";
	cin >> numLoans;

	for (int i = 0; i < numLoans; i++) {
		double principal;
		double rate;

		cout << "請輸入第 " << i + 1 << " 筆貸款的本金（台幣）：";
		cin >> principal;

		cout << "請輸入第 " << i + 1 << " 筆貸款的年利率（百分比）：";
		cin >> rate;

		rate /= 100.0;


		double interest = principal * rate;

		cout << "第 " << i + 1 << " 筆貸款一年的利息為：" << interest << " 台幣\n";
	}

	return 0;
}
