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
	cout << "a��b�����Լ��Ϊ��" << t << endl;

	int x, y;
	divisor(a, b, x);
	cout << "a��b�����Լ��Ϊ��" << x << endl;
	multiples(a, b, y);
	cout << "a��b����С������Ϊ��" << y << endl;
	return 0;
}