#include <iostream>
using namespace std;
class Time             // ����Time��
{
private:// ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	~Time() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
	void getin() {
		cin >>hour >> minute >> sec;
		
	}
};
int main()
{
	Time t1;      //����t1ΪTime�����
	t1.getin();   //�����趨��ʱ�� 
	return 0;
}
