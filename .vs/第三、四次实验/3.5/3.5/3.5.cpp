#include <iostream>
using namespace std;
int main(int t,int day) {
	int n = 1;
	for (day=10; day > 1; --day) {
		 t= (n + 1) * 2;
		 n = t;
	}
	cout << "第一天猴子共摘" << t << "个桃子" << endl;
}