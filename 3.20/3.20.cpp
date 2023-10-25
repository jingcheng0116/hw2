#include <iostream>
using namespace std;

int main() {
	int n;
	double worktime, monery;
	double total; 

	cout << "請輸入雇傭人員數量: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "請輸入第 " << i + 1 << " 工作時數: ";
		cin >> worktime;
		cout << "請輸入第 " << i + 1 << " 時薪: ";
		cin >> monery;
		if (worktime > 40)
		{
			total = 40 * monery + (worktime-40)* monery*1.5;
		}
		else
		{
		total = worktime * monery;
		}
		cout << "第 " << i + 1 << " 薪水為: " << total << " 元" << endl;
	}

	return 0;
}
