#include<iostream>
using namespace std;
class grade
{
public:
    int num;
    int score;
};

void max(grade* grd)
{
    int maxScore = grd[0].score;
    int maxnum = 0;
    for (int i = 1; i < 5; i++)
    {
        if (grd[i].score > maxScore)
        {
            maxScore = grd[i].score;
            maxnum = i;
        }
    }
    cout << "��߳ɼ��ߵ�ѧ��Ϊ��" << grd[maxnum].num << endl;
}

int main() {
    grade students[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "�������" << i + 1 << "��ѧ����ѧ�źͳɼ���" << endl;
        cin >> students[i].num >> students[i].score;
    }
    max(students);
    system("pause");
    return 0;
}