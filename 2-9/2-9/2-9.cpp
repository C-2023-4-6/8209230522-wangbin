#include <iostream>
using namespace std;
int main() {
	int i;//��j��ƻ������
	int j = 0;
	double average;
	double sum = 0;
	for (i = 2; i <= 100; i *= 2) {
		sum = sum + i * 0.8;//������j���ܻ���
		j++;
	}
	average = sum / j;
	cout <<"ƽ��ÿ�컨�ѣ�"<< average << endl;
}