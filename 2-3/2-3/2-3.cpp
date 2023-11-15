#include <iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "请输入三边长" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a - b < c) {
		cout << "三角形边长为：" << a + b + c << endl;
		if (a == b || b == c||a==c) {
			cout << "该三角形为等腰三角形" << endl;
		}
		else cout << "该三角形非等腰三角形" << endl;
	}
	else cout << "无法构成三角形" << endl;
}