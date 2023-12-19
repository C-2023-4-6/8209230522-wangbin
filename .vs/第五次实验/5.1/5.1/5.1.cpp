#include <iostream>
using namespace std;
class Time             // 定义Time类
{
private:// 数据成员为公用的
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
	Time t1;      //定义t1为Time类对象
	t1.getin();   //输入设定的时间 
	return 0;
}
