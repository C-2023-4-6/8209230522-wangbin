#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int indexof(const char s1[],const char s2[]) {
	int a, b, index, j, k;
	a = strlen(s1);
	b = strlen(s2);
	bool* s3 = new bool[a];
	for (int i = 0; i < a; i++) {
		s3[i] = false;
	}

	for (int i = 0; i < b - a + 1; i++) {//i是错开的位数

		for (j = 0, k = i; (j < a) && (k < i + a); j++, k++) {//j测s1，k测s2
			if (s1[j] == s2[k]) {
				index = i;//记录s1在s2的下标（左对齐的位数）
				s3[j] = true;
			}
		}//在当前错位情况下记录s1与s2重合情况（如果s3全true则完全重合）

			int h = 0;

		for (int i = 0; i < a; i++) {
			if (s3[i] == false && i == b - a) {//如果s1短于s2但两者不完全贴合或者s1长于s2就返回-1
				return -1; 
				break;
			}//检验s3是否全true，若没有，break并开始外部for的第二次
			if (s3[i]) {
				h++;
			}//假设已经全true了，用h提取true的个数以向下传达全true的信息
		}

		if (h == a) {
			return index;
		}

	}//本质上就是把s1从头开始与s2一次次错位比较，外部循环一次就是错开一位


	delete[]s3;
}

int main() {
	int size = 999;
	char* s1 = new char[size];
	cout << "请输入s1：" << endl;
	cin.getline(s1, size);
	char* s2 = new char[size];
	cout << "请输入s2：" << endl;
	cin.getline(s2, size);
	cout << "检验" << s1 << "与" << s2 << "结果为：" << indexof(s1, s2) << endl;
	delete[]s1;
	delete[]s2;
	
}
