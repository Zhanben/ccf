#include <iostream>
#include <iomanip> //用来控制cin，cout的输入输出格式的库
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	if (0 <= x && x < 5)
	{
		y = x + 2.5;
	}
	else if (5 <= x && x < 10)
	{
		y = 2 - 1.5 * (x - 3) * (x - 3);
	}
	else
	{
		y = x / 2 - 1.5;
	}
	cout << fixed << setprecision(3) << y << endl; //先设置精度，再输出
	return 0;
}