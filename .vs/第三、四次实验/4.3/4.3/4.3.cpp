#include<iostream>
using namespace std;
int main() {
	bool box[100];
	for (int i = 0; i < 100; i++) {
		box[i] = false;
	}
	for (int s = 0; s < 100; s++) {
		for (int l = s; l < 100; l+=s+1) {//l为间隔，第s个同学隔s个变一个，也就是变当前位置往后第s+1个
			if (box[l]) {
				box[l] = false;
			}
			else {
				box[l] = true;
			}
		}
	}
	cout << "开着的柜子有：" << endl;
	for (int i = 0; i < 100; i++) {
		if (box[i]) {
			cout << i+1 << " ";
		}
	}
}