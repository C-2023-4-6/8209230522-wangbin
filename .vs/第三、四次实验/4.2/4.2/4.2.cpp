#include <iostream>
using namespace std;
int main() {
	double a[10];
	cout << "������ʮ������" << endl;
	for (int i = 0; i <= 9; i++) {
		cin >> a[i];
	}
	bool changed = true;
	do {
		changed = false;
		for (int i = 0; i < 9; i++) {
			if (a[i] > a[i + 1]) {
				double t = a[i + 1];
				a[i + 1] = a[i];
				a[i] = t;
				changed = true;//��ǰ���������Ԫ�����αȽϣ������滻��λ�ã�����ֵ��ʹchangedΪtrue����ʼ��һ��while
			}
		}
	} while (changed);
	cout << "����Ϊ��" << endl;
	for (int i = 0; i < 10; i++) {
		cout<< a[i] << " ";
	}
	}