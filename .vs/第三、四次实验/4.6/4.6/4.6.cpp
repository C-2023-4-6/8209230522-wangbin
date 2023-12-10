#include <iostream>
#include <cstring>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	for (int j = 0; j < strlen(s); j++) {
		int n = s[j] - 'a';
		int N = s[j] - 'A';
		if (s[j] == 'A' + N||s[j]=='a'+n) {
			counts[n]++;
		}
	}
}

int main() {
	cout << "ÇëÊäÈë×Ö·û´®£º" << endl;
	char s[99];
	cin.getline(s, 99);
	int counts[26];
	count(s, counts);
	for (int i = 0; i < 26; i++) {
		if(counts[i]!=0)
		cout << static_cast<char>('a' + i) << "£º" << counts[i] << endl;
	}
	
}