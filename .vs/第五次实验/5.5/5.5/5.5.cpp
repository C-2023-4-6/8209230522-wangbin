#include <iostream>
using namespace std;

class point {
private:
	int x;
	int y;
public:
	point() {
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

int main() {
	point a;
	int i, j;
	cout << "ÇëÊäÈëi£¬j£º" << endl;
	cin >> i >> j;
	a.setPoint(i,j);
	a.display();
	return 0;
}