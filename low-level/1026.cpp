#include <iostream>
#include <iomanip> //用来控制cin，cout的输入输出格式的库
using namespace std;

int main()
{
	int x, max = 0, min = 100;
	double t = 0;
	for (int i = 1; i <= 10; i++)
	{
		cin >> x;
		if (x > max)
			max = x;
		if (min > x)
			min = x;
		t = t + x;
	}
	t = (t - max - min) / 8;
	cout << fixed << setprecision(3) << t << endl; //先设置精度，再输出
	return 0;
}
