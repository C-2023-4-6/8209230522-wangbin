#include <iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "���������߳�" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a - b < c) {
		cout << "�����α߳�Ϊ��" << a + b + c << endl;
		if (a == b || b == c||a==c) {
			cout << "��������Ϊ����������" << endl;
		}
		else cout << "�������ηǵ���������" << endl;
	}
	else cout << "�޷�����������" << endl;
}