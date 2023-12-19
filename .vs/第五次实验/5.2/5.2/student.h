#include <iostream>
#include <cstring>
using namespace std;
class Student              //类声明
{
public:  //公用成员函数原型声明
	void display() {
		cout << num << endl;
		cout << name << endl;
		cout << sex << endl;
	}
	void set_value(int N,string M, char S) {
		num = N;
		strcpy_s(name, M.c_str());
		sex = S;
	}
private:
	int num;
	char name[20];
	char sex;
};
