/*

4        空格        星花
###*     3=4-1    1=2*1-1
##***    2=4-2    3=2*2-1
#*****   1=4-3    5=2*3-1
*******  0=4-4    7=2*4-1


5              空格      星花
####*         4=5-1      1=2*1-1
###***        3=5-2      3=2*2-1
##*****       2=5-3      5=2*3-1
#*******      1=5-4      7=2*4-1
*********     0=5-5      9=2*5-1

*/

#include <iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
