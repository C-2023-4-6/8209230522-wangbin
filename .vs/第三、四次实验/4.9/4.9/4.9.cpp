#include <iostream>
using namespace std;

int acu(int(test)[],int size) {
	cout << "请输入数组元素:" << endl;
	for (int i = 0; i < size; i++) {
		cin >> test[i];
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size-1; j++) {
			if (test[j] > test[j + 1]) {
				int t = test[j + 1];
				test[j + 1] = test[j];
				test[j] = t;
			}
		}
	}
	return 0;
}

int main() {
	int size;
	cout << "请输入数组大小:" << endl;
	cin >> size;
	int* test = new int[size];
	acu(test, size);
	cout << "数组为:" << endl;
	for (int i = 0; i < size; i++) {
		cout << test[i] << " ";
	}
	cout << endl;
	cout << "请输入你想要的数组元素:" << endl;
	int a;
	cin >> a;
	int* ap = test + (a-1);
	cout << "结果:";
	cout << *ap << endl;
	delete[]test;
}