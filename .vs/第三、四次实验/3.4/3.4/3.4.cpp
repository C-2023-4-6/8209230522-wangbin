#include <iostream>
#include "mytriangle.h"
using namespace std;
int main(double side1,double side2,double side3) {
	cout << "请输入三边长：" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3)) {
		cout<<"三角形面积为："<< _area(side1, side2,  side3)<<endl;
	}
	return 0;
}