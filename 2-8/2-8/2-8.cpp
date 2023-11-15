#include <iostream>
using namespace std;
int main() {
	int a;
	cout << "请输入a的值：" << endl;
	cin >> a;
	double i = a;
	double j = (i + a / i) / 2;
	for (i,j; abs(j - i) >= 10e-5; i = j, j = (i + a / i) / 2){}
	cout << "a的平方根为：" << j << endl;
}