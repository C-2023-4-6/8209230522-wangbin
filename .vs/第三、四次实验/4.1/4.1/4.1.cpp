#include<iostream>
using namespace std;
int main(){
	const int size = 10;
	int list[size];
	cout << "Enter ten numbers:" << endl;
	for (int i = 0; i < size; i++) {
		cin >> list[i];
	}
		cout << list[0] << " ";//�������һ����
		for (int m = 1; m < size; m++) {
			for (int j = 0; j < m; j++) {
				if (list[m] != list[j]) {
					if (j == m - 1) {
						cout << list[m] << " ";
					}
					else continue;
				}
				else break;
			}
		}
}
//�Ƚ�a[1]��a[0~0]�Ƚ�(j<m)��
//һ�����ǡ���ڵ�һ��a[1]!=a[j]��j==m-1==0,ֱ�����a[1];
//�������a[1]==a[0],��ִ��break����ֱ�ӿ�ʼ�ⲿforѭ���ڶ��Σ��Ƚ�a[2]��a[0~1];
//�������a[2]==a[0],ִ��break��ʼ�ⲿforѭ�������Σ�
//�ģ����a[2]!=a[0],����ʱj==0!=2-1,ִ��continue�����ڲ�forѭ���ڶ��Σ��Ƚ�a[2]��a[1]
//�������ƣ�����˵���������ж����if����ͨ�����ж��ڲ�if