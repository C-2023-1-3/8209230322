#include<iostream>
using namespace std;
class point
{
public:
	void setPoint();
	void display();
private:
	int x;
	int y;
};
void point::setPoint()
{
	int i = 0;
	int j = 0;
	cout << "i=" << endl;
	cin >> i;
	cout << "j=" << endl;
	cin >> j;
	
	x = i + 60;
	y = j + 80;
}
void point::display()
{
	cout << "(" << x << "," << y << ")" << endl;
};
int main()
{
	point p;
	p.setPoint();
	p.display();
}