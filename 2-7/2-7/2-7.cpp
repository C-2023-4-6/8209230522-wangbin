#include <iostream>
using namespace std;
int main() {
	int i;
	for (i = 5; i > 0 ; i--) {
		for (int j = i; j <= 4; j++) {
			cout << '*';
		}
		cout << '*' << endl;
		
	}
}