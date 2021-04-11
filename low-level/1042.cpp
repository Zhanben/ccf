#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

struct student
{
    int number;
    int chinese;
    int math;
    int english;
};

bool compare(student a, student b)
{
    int atotal = a.chinese + a.math + a.english;
    int btotal = b.chinese + b.math + b.english;
    if (atotal != btotal)
    {
        return atotal > btotal; //先按照总分，从大到小排序
    }
    else if (a.chinese != b.chinese)
    {
        return a.chinese > b.chinese; //按照语文成绩从大到小排序
    }
    else
    {
        return a.number < b.number; //最后一种情况，按照学号从小到大排序
    }
}

int main()
{
    int people;
    cin >> people;
    //读取学生学号和成绩
    vector<student> students;

    for (int i = 1; i <= people; i++)
    {
        student stu;
        stu.number = i;
        cin >> stu.chinese >> stu.math >> stu.english;
        students.push_back(stu);
    }

    sort(begin(students), end(students), compare); //对学生成绩进行排名

    //输出所有的学生学号和成绩
    for (int i = 0; i < 5; ++i)
    {
        cout << students[i].number << " " << students[i].chinese + students[i].math + students[i].english << endl;
    }
    return 0;
}