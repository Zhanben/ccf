#include <iostream>
#include <math.h>
#include <iomanip> //用来控制cin，cout的输入输出格式的库
using namespace std;

int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << fixed << setprecision(4) << s << endl; //先设置精度，再输出
}