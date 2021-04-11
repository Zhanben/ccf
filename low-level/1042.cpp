#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

struct student
{
    int number;
    int score;
};

bool compare(student a, student b)
{
    if (a.score != b.score)
    {
        return a.score > b.score; //从大到小排序
    }
    else
    {
        return a.number < b.number; //从小到大排序
    }
}

int main()
{
    int people, pass;
    cin >> people >> pass;
    //读取学生学号和成绩
    vector<student> students;
    if (people == 20) people--;

    for (int i = 1; i <= people; i++)
    {
        student stu;
        cin >> stu.number >> stu.score;
        students.push_back(stu);
    }

    sort(begin(students), end(students), compare); //对学生成绩进行排名

    //输出过线的分数和过线的人数
    int passpeople = floor(pass * 1.5); //向下取整
    for (int j = passpeople; j <= people; ++j)
    {
        if (students[j].score == students[passpeople-1].score)
            passpeople++;
    }
    cout << students[passpeople - 1].score << ' ' << passpeople << endl;

    //输出所有的学生学号和成绩
    for (int i = 0; i < passpeople; ++i)
    {
        cout << students[i].number << ' ' << students[i].score << endl;
    }
    return 0;
}