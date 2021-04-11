#include <iostream>
using namespace std;

int main()
{
	int n, a, b, c;
	int prize[3] = {0};
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		prize[0] += a;
		prize[1] += b;
		prize[2] += c;
	}
	cout << prize[0] << " " << prize[1] << " " << prize[2] << " " << prize[0] + prize[1] + prize[2] << endl;
	return 0;
}