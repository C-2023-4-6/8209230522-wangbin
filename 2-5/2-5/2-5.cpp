#include <iostream>
using namespace std;
int main() {
	char a;
	int number = 0;
	int space = 0;
	int letter = 0;
	int other = 0;

	while ((a = getchar()) && a != '\n')
	{
		if (a >= '0' && a <= '9')
			number++;
		else if (a == ' ')
			space++;
		else if (a >= 'A' && a <= 'z')
			letter++;
		else other++;
	}
	cout << "数字个数为："<<number<<endl;
	cout << "空格个数为："<<space<<endl;
	cout << "字母个数为："<<letter<<endl;
	cout << "其他个数为："<<other<<endl;
}