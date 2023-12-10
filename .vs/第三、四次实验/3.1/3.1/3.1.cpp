#include <iostream>
using namespace std;
int divisor(int a, int b,int &n) {
	n = min(a, b);
	for (n; a % n != 0 || b % n != 0; --n) {}
	return 0;
}

int multiples(int a, int b,int &m) {
	m = max(a, b);
	for (m; m % a != 0 || m % b != 0; ++m) {}
	return 0;
}
int main(int a, int b) {
	cin >> a >> b;
	int t = min(a, b);
	for (t; a % t != 0 || b % t != 0; --t) {}
	cout << "a与b的最大公约数为：" << t << endl;

	int x, y;
	divisor(a, b, x);
	cout << "a与b的最大公约数为：" << x << endl;
	multiples(a, b, y);
	cout << "a与b的最小公倍数为：" << y << endl;
	return 0;
}