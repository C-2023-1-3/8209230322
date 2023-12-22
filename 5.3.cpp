#include<iostream>
using namespace std;
class Cfz
{
public:
	void math();
	void display();
private:
	int length;
	int width;
	int height;
	int V;
};
void Cfz::math()
{
	cout << "该长方柱的长宽高分别是：" << endl;
	cin >> length;
	cin >> width;
	cin >> height;
	V = length * height * width;
}
void Cfz::display()
{
	cout << "V=" << V << endl;

};
int main()
{
	Cfz v1;
	Cfz v2;
	Cfz v3;
	v1.math();
	v1.display();
	v2.math();
	v2.display();
	v3.math();
	v3.display();

}