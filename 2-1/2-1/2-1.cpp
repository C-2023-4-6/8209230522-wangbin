#include <iostream>
using namespace std;
int main() {
	char letter;
	cout << "ÇëÊäÈë×ÖÄ¸£º" << endl;
	cin >> letter;
	if (letter >= 'a' && letter <= 'z') {
		letter = letter - 32;
		cout << letter << endl;
	}
	else {
		char result;
		result = letter + 1;
		cout << (int)result << endl;
	}
}