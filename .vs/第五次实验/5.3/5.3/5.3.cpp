#include <iostream>
using namespace std;

class M {
private:
	double length[3];
	double width[3];
	double height[3];
public:
	void getin() {
		cout << "������length:" << endl;
		for (int i = 0; i < 3; i++) {
			cin >> length[i];
		}
		cout << "������width:" << endl;
		for (int i = 0; i < 3; i++) {
			cin >> width[i];
		}
		cout << "������height:" << endl;
		for (int i = 0; i < 3; i++) {
			cin >> height[i];
		}
	}
	void getout() {
		cout << "�������������Ϊ��" << endl;
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