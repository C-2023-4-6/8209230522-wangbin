#include <iostream>
#include "mytriangle.h"
using namespace std;
int main(double side1,double side2,double side3) {
	cout << "���������߳���" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3)) {
		cout<<"���������Ϊ��"<< _area(side1, side2,  side3)<<endl;
	}
	return 0;
}