#include <iostream>
using namespace std;

int main()
{
	int n, x, x_max, x_min;
	cin >> n >> x;
	x_max = x;
	x_min = x;
	for (int i = 1; i < n; i++)
	{
		cin >> x;
		if (x_max < x)
			x_max = x;
		if (x_min > x)
			x_min = x;
	}
	cout << x_max - x_min << endl;
	return 0;
}