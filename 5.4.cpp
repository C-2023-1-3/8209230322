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
    cout << "最高成绩者的学号为：" << grd[maxnum].num << endl;
}

int main() {
    grade students[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "请输入第" << i + 1 << "个学生的学号和成绩：" << endl;
        cin >> students[i].num >> students[i].score;
    }
    max(students);
    system("pause");
    return 0;
}