#include <iostream>
using namespace std;
int main() {
	int x, y, i, j;
	cout << "请输入：" << endl;
	cin >> x >> y;
	for (i = x;; i++) {
		if (i % x == 0 && i % y == 0)
			break;
	}
	cout << "最小公倍数为：" << i++ << endl;

	for (j = min(x, y); x % j != 0|| y% j != 0; j--){}
		cout << "最大公约数为：" << j<< endl;
}