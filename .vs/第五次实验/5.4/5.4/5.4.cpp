#include <iostream>
using namespace std;
class student {
public:
	int num;
	int point;
	void getin() {
		cin >> num >> point;
	}
};

int max(student*a[]) {
	student *t[5];
	for (int i = 0; i < 4; i++) {
		for (int j = i; j < 4; j++) {
			if (a[j]->point > a[j + 1]->point) {
				t[j]=a[j];
				a[j]= a[j + 1];
				a[j + 1] = t[j];
			}
		}
	}
	cout << a[4]->num << " ";
	return  a[4]->point;
}

int main() {
	student A[5];
	cout << "请分别输入五个学生的学号和成绩：" << endl;
	student* a[5];
	for (int i = 0; i < 5; i++) {
		A[i].getin();
		//a[i] = new student(A[i]);
		a[i] =&A[i];//A[i]不代表地址
	}
	cout << "最高成绩为：" <<max(a) << endl;
	
}