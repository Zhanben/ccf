#include <iostream>
#include <math.h> 
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int a,b,c;
	a=n/100;
	b=(n%100)/10;
	c=(n%100)%10;
	if(pow(a,3)+pow(b,3)+pow(c,3)==n)cout<<"YES";
	else cout<<"NO";
	return 0;
}


/*
1、开根号函数 sqrt(), sqrt(x)返回的是平方根
例：sqrt(4)==2

2、指数函数 pow(),  float pow(float x, float y)计算x的y次幂。
例：pow(4, 2)==16

3、舍尾取整函数 trunc(),trunc(x)返回的是x舍取小数位后的整数。
例：trunc(-5.5) == -5；trunc(5.5) == 5；

4、向下取整函数 floor(),floor(x)返回的是小于或等于x的最大整数。
例：floor(-5.5) == -6；floor(5.5) == 5；

5、向上取整函数 ceil(), ceil(x)返回的是大于x的最小整数。
例：ceil(-5.5) == -5; ceil(5.5) == 6
*/
