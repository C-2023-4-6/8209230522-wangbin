#include <iostream>
using namespace std;
int main() {
	double a, b;
	cout << "�����룺" << endl;
	cin >> a >> b;
	cout << "a+b=" << a + b << endl;
	cout << "a-b=" << a - b << endl;
	cout << "a*b=" << a * b << endl;
	if (b != 0) {
		cout << "a/b=" << a / b << endl;
	}
	int c, d;
	cout << "�����룺" << endl;
	cin >> c >> d;
	if (d != 0) {
		cout << "a%b=" << c % d << endl;
	}

}