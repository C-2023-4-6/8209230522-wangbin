#include <iostream>
using namespace std;
bool is_prime(int num) {
	if (num <= 1) {
		return 0;
	}
	for (int i = 2; i <= num; i++) {
		if (num % i == 0 && num != i) {
			return 0;
		}
	}
	return 1;
}
int main(int num) {
	cout << "请输入num：" << endl;
	cin >> num;
	if (is_prime(num)) {
		cout << "num是素数" << endl;
		cout << "num=" << num << endl;
	}
	else cout << "num不是素数" << endl;

	int n=2,count=0;
	for (n;n<200; n++) {
		for (n; is_prime(n); n++) {
			cout << n<<" ";
			count++;
			if (count == 10) {
				count = 0;
				cout << " " << endl;
			}
		}
	}
}