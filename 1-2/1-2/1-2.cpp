#include<iostream>
using namespace std;
int main()
{
	const double Pi = 3.1415926;
	double r, h;
	cout << "������Բ׶�ĵ���뾶���ߣ�" << endl;
	cin >> r >> h;
	double v;
	v = 1.0/3*Pi * r * r * h;
	cout << "Բ׶�����Ϊ��" << v << endl;
	return 0;
}