#include <iostream>
using namespace std;
int main(int t,int day) {
	int n = 1;
	for (day=10; day > 1; --day) {
		 t= (n + 1) * 2;
		 n = t;
	}
	cout << "��һ����ӹ�ժ" << t << "������" << endl;
}