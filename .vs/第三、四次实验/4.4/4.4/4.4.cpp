#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int t;
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i];
	}
	for (int j = 0; j < size2; j++) {
		list3[j + size1] = list2[j];
	}
	for (int i = 0; i < (size1 + size2) - 1; i++) {//һ��forֻ�ܵ�ǰ���������������������for�����������磨4��3��2������3��4��2��
		for (int j = 0; j < (size1 + size2) - 1; j++) {//����3��2��4��������ǰ�����������ڵ�����ʱ�޷���ȷ����                                                              
			if (list3[j] > list3[j + 1]) {
				t = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = t;
			}
		}
	}

	cout << "the merged list is:" << endl;
	for (int i = 0; i < (size1 + size2); i++) {
		cout << list3[i] << " ";
	}
}

int main() {
	int size1, size2, size3;
	cout << "������size1��size2" << endl;
	cin >> size1 >> size2;
	int* list1 = new int[size1];//����ֱ��int list1[size1]�������ʼ��Ҫ�ó���
	int* list2 = new int[size2];//������ָ�벢��new��������ռ�

	cout << "������list1Ԫ�أ�" << endl;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "������list2Ԫ�أ�" << endl;
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}
	size3 = size1 + size2;
	int* list3 = new int[size3];
	merge(list1, size1, list2, size2, list3);

	delete[]list1;
	delete[]list2;
	delete[]list3;
	return 0;
}