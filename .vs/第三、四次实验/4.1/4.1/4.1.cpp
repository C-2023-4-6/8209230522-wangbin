#include<iostream>
using namespace std;
int main(){
	const int size = 10;
	int list[size];
	cout << "Enter ten numbers:" << endl;
	for (int i = 0; i < size; i++) {
		cin >> list[i];
	}
		cout << list[0] << " ";//先输出第一个数
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
//先将a[1]和a[0~0]比较(j<m)；
//一：如果恰好在第一轮a[1]!=a[j]且j==m-1==0,直接输出a[1];
//二：如果a[1]==a[0],则执行break部分直接开始外部for循环第二次，比较a[2]和a[0~1];
//三：如果a[2]==a[0],执行break开始外部for循环第三次；
//四：如果a[2]!=a[0],但此时j==0!=2-1,执行continue开启内部for循环第二次，比较a[2]与a[1]
//依此类推，简单来说，就是先判断外层if，若通过再判断内层if