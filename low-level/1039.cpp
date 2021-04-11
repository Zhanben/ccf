#include <iostream>
using namespace std;
int main()
{
	int a, b = 1;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		b = b * 2;
	}
	cout << b;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	cout << (1 << a);
	return 0;
}