#include <iostream>
#include <cstring>
using namespace std;
class Student              //������
{
public:  //���ó�Ա����ԭ������
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
