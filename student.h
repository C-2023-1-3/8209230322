#include<iostream>
using namespace std;
class Student
{
public:
	void set_value(int NUM,const char NAME[20], char SEX);
	void display();
private:
	int num;
	char name[20];
	char sex;

};
