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
	for (int i = 0; i < (size1 + size2) - 1; i++) {//一个for只能调前后两个，这里必须用两个for，否则会出现如（4，3，2）到（3，4，2）
		for (int j = 0; j < (size1 + size2) - 1; j++) {//到（3，2，4），即当前两个数都大于第三个时无法正确排序                                                              
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
	cout << "请输入size1与size2" << endl;
	cin >> size1 >> size2;
	int* list1 = new int[size1];//不能直接int list1[size1]；数组初始化要用常量
	int* list2 = new int[size2];//可以用指针并用new申请数组空间

	cout << "请输入list1元素：" << endl;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "请输入list2元素：" << endl;
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