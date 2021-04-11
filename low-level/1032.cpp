/*
4        空格        星花
###*     3=4-1    1=2*1-1
##***    2=4-2    3=2*2-1
#*****   1=4-3    5=2*3-1
*******  0=4-4    7=2*4-1



n=4        空格        星花
###*     3=4-1    1=2*1-1
##***    2=4-2    3=2*2-1
#*****   1=4-3    5=2*3-1
*******  0=4-4    7=2*4-1

下面一部分总共（n-1）行
        空格    星花
#*****   1     5=2*3-1   n-1=3
##***    2     3=2*2-1   n-2=2
###*     3     1=2*1-1   n-3=1

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
			cout << j;
		}
		cout << endl;
	}
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * (n - i) - 1; j++)
		{
			cout << j;
		}
		cout << endl;
	}
	/*
	for(int i=n-1; i>=1; i--)
	{
		for(int j=1; j<=n-i; j++){
			cout<<" ";
		}		
		for(int j=1; j<=2*i-1; j++){
			cout<<j;
		}		
		cout<<endl;
	}
	*/
	return 0;
}