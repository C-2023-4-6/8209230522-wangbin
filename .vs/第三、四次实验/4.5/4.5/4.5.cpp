#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int indexof(const char s1[],const char s2[]) {
	int a, b, index, j, k;
	a = strlen(s1);
	b = strlen(s2);
	bool* s3 = new bool[a];
	for (int i = 0; i < a; i++) {
		s3[i] = false;
	}

	for (int i = 0; i < b - a + 1; i++) {//i�Ǵ���λ��

		for (j = 0, k = i; (j < a) && (k < i + a); j++, k++) {//j��s1��k��s2
			if (s1[j] == s2[k]) {
				index = i;//��¼s1��s2���±꣨������λ����
				s3[j] = true;
			}
		}//�ڵ�ǰ��λ����¼�¼s1��s2�غ���������s3ȫtrue����ȫ�غϣ�

			int h = 0;

		for (int i = 0; i < a; i++) {
			if (s3[i] == false && i == b - a) {//���s1����s2�����߲���ȫ���ϻ���s1����s2�ͷ���-1
				return -1; 
				break;
			}//����s3�Ƿ�ȫtrue����û�У�break����ʼ�ⲿfor�ĵڶ���
			if (s3[i]) {
				h++;
			}//�����Ѿ�ȫtrue�ˣ���h��ȡtrue�ĸ��������´���ȫtrue����Ϣ
		}

		if (h == a) {
			return index;
		}

	}//�����Ͼ��ǰ�s1��ͷ��ʼ��s2һ�δδ�λ�Ƚϣ��ⲿѭ��һ�ξ��Ǵ�һλ


	delete[]s3;
}

int main() {
	int size = 999;
	char* s1 = new char[size];
	cout << "������s1��" << endl;
	cin.getline(s1, size);
	char* s2 = new char[size];
	cout << "������s2��" << endl;
	cin.getline(s2, size);
	cout << "����" << s1 << "��" << s2 << "���Ϊ��" << indexof(s1, s2) << endl;
	delete[]s1;
	delete[]s2;
	
}
