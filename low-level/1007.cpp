#include<iomanip>
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	double a,b,r;
	cin>>a>>b;
	r = a - trunc(a/b)*b; 
	cout<<fixed<<setprecision(2)<<r<<endl;
	return 0;
}











/*
舍尾取整函数 trunc(),trunc(x)返回的是x舍取小数位后的整数。
trunc(-5.5) == -5；trunc(5.5) == 5；
向下取整函数 floor(),floor(x)返回的是小于或等于x的最大整数。
floor(-5.5) == -6；floor(5.5) == 5；
向上取整函数 ceil(), ceil(x)返回的是大于x的最小整数。
ceil(-5.5) == -5; ceil(5.5) == 6
这三个函数都在头文件 math.h 中
*/