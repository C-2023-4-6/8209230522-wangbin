#include <iostream>
using namespace std;
int main() {
	int x, y, i, j;
	cout << "�����룺" << endl;
	cin >> x >> y;
	for (i = x;; i++) {
		if (i % x == 0 && i % y == 0)
			break;
	}
	cout << "��С������Ϊ��" << i++ << endl;

	for (j = min(x, y); x % j != 0|| y% j != 0; j--){}
		cout << "���Լ��Ϊ��" << j<< endl;
}