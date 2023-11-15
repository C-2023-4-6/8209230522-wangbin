#include <iostream>
using namespace std;
int main() {
	double x,y;
	cout << "请输入x：" << endl;
	cin >> x;
	if (x > 0 && x < 1) {
		y = 3 - 2 * x;
		cout << y << endl;
	}
	else if (x >= 1 && x < 5) {
		y = 2 / (4 * x) + 1;
		cout << y << endl;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
		cout << y << endl;
	}
	else cout << "x不在定义域内" << endl;
}