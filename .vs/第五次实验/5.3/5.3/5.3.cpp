#include <iostream>
using namespace std;

class M {
private:
	double length[3];
	double width[3];
	double height[3];
public:
	void getin() {
		cout << "请输入length:" << endl;
		for (int i = 0; i < 3; i++) {
			cin >> length[i];
		}
		cout << "请输入width:" << endl;
		for (int i = 0; i < 3; i++) {
			cin >> width[i];
		}
		cout << "请输入height:" << endl;
		for (int i = 0; i < 3; i++) {
			cin >> height[i];
		}
	}
	void getout() {
		cout << "三个长方体体积为：" << endl;
		for (int i = 0; i < 3; i++) {
			cout << length[i] * width[i] * height[i] << " ";
		}
	}
};

int main() {
	M m;
	m.getin();
	m.getout();
}