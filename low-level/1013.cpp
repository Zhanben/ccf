#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b && a == c)
		{
			cout << "Equilateral" << endl;
		}
		else if ((a * a + b * b) == c * c || (a * a + c * c) == b * b || (c * c + b * b) == a * a)
		{
			cout << "Right" << endl;
		}
		else
		{
			cout << "General" << endl;
		}
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}