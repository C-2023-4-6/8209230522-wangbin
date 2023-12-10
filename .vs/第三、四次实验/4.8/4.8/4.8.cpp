#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int parseHex(const char* const hexString) {
	int sum = 0;
	int len = strlen(hexString) - 1;
	for (int i = 0; i < 50; i++) {
		//int n = scanf("%d", &hexString[i]);
		if (hexString[i] >= '0' && hexString[i] <= '9') {
			int n = hexString[i] - '0';
			if (hexString[i] == n + '0') {
				sum += n * pow(16, len - i);
			}
		}
			else if (hexString[i] >= 'A' && hexString[i] <= 'F') {
				int m = hexString[i] - 'A';
				if (hexString[i] == m + 'A') {
					sum += (m + 10) * pow(16, len - i);
				}
			}
		}
		return sum;
	}

	int main(){
	char hexString[50];
	cout << "please input the string:" << endl;
	cin.getline(hexString, 50);
	cout << "the result is:" << parseHex(hexString) << endl;
}