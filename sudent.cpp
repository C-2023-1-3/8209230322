#include <iostream>
#include"student.h"  
using namespace std;//��Ҫ©д���У��������ͨ����

void Student::set_value(int NUM,const char NAME[20],char SEX )
{
    num=NUM;
    for (int i = 0;i < 20;i++)
    {
        name[i] = NAME[i];
    }
    sex=SEX;
}
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��"<< name << endl;
    cout << "sex��" << sex << endl;
}