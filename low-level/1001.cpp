#include <iostream>
#include <iomanip> //用来控制cin，cout的输入输出格式的库
using namespace std;

int main()
{
	float c, f;
	cin >> f;
	c = (f - 32) * 5 / 9; //转换公式
	//cout<<setiosflags(ios::fixed);
	cout << fixed << setprecision(4) << c << endl; //先设置精度，再输出
	return 0;
}
