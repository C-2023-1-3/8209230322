#include<iostream>
using namespace std;
class Time             // ����Time��
{private:
	int hour;
	int minute;
	int sec;

	
public:   
	void SetTime(int h = 0, int m = 0, int s = 0)
	{
		
		hour = h;
		minute = m;
		sec = s;
	}
	void ShowTime() {
        cin >> hour;
		cin >> minute;
		cin >> sec;
		cout << hour << ":" << minute << ":" << sec << endl;
	}
	
};
int main()
{
	Time tl;  
	//����t1ΪTime�����
	tl.ShowTime();

	return 0;
}