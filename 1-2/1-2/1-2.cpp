#include<iostream>
using namespace std;
int main()
{
	const double Pi = 3.1415926;
	double r, h;
	cout << "请输入圆锥的底面半径、高：" << endl;
	cin >> r >> h;
	double v;
	v = 1.0/3*Pi * r * r * h;
	cout << "圆锥的体积为：" << v << endl;
	return 0;
}