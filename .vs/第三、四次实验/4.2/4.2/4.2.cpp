#include <iostream>
using namespace std;
int main() {
	double a[10];
	cout << "请输入十个数：" << endl;
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
				changed = true;//从前到后的相邻元素依次比较，到可替换处位置，交换值并使changed为true，开始下一次while
			}
		}
	} while (changed);
	cout << "排序为：" << endl;
	for (int i = 0; i < 10; i++) {
		cout<< a[i] << " ";
	}
	}