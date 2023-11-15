#include <iostream>
using namespace std;
int main() {
	float F = 0;
	cout << "请输入华氏度：" << endl;
	cin >> F;
	float C = (F - 32) / 1.8;
	cout << "摄氏度为：" << C << "°C" << endl;
}