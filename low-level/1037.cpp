/*这是一个幂运算的题，让人很容易使用pow函数来运算，
但是会因为指数较大时产生数的溢出。
用for 循环去完成幂运算,因为结果只要个位数，
所以，可以把每次相乘的结果取个位数再去相乘。*/
#include <iostream>

using namespace std;
int main()
{
	long long a,b,k;
	cin >> a >> b;
	k = a;
	for(int i=2;i<=b;i++)
	{	
		k *= a;
		k %= 10;
	}
	cout << k;
 
 return 0;
}