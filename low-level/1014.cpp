#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a >= 90)
	{
		cout << "Excellent" << endl;
	}
	else if (a >= 80 && a < 90)
	{
		cout << "Good" << endl;
	}
	else if (a >= 60 && a < 80)
	{
		cout << "Pass" << endl;
	}
	else if (a < 60)
	{
		cout << "Fail" << endl;
	}
	return 0;
}