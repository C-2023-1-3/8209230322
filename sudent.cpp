#include <iostream>
#include"student.h"  
using namespace std;//不要漏写此行，否则编译通不过

void Student::set_value(int NUM,const char NAME[20],char SEX )
{
    num=NUM;
    for (int i = 0;i < 20;i++)
    {
        name[i] = NAME[i];
    }
    sex=SEX;
}
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name："<< name << endl;
    cout << "sex：" << sex << endl;
}