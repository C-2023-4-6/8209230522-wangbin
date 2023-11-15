#include <iostream>
using namespace std;
int main() {
	int i;//第j天苹果个数
	int j = 0;
	double average;
	double sum = 0;
	for (i = 2; i <= 100; i *= 2) {
		sum = sum + i * 0.8;//截至第j天总花费
		j++;
	}
	average = sum / j;
	cout <<"平均每天花费："<< average << endl;
}