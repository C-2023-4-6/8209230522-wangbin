#include<iostream>
using namespace std;
int main() {
	bool box[100];
	for (int i = 0; i < 100; i++) {
		box[i] = false;
	}
	for (int s = 0; s < 100; s++) {
		for (int l = s; l < 100; l+=s+1) {//lΪ�������s��ͬѧ��s����һ����Ҳ���Ǳ䵱ǰλ�������s+1��
			if (box[l]) {
				box[l] = false;
			}
			else {
				box[l] = true;
			}
		}
	}
	cout << "���ŵĹ����У�" << endl;
	for (int i = 0; i < 100; i++) {
		if (box[i]) {
			cout << i+1 << " ";
		}
	}
}