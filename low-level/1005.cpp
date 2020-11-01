#include <iostream>
#include <iomanip>  //用来控制cin，cout的输入输出格式的库
#include <math.h>
using namespace std;
int main()
{
	float r,x,p; 
	cin >> r >> x >> p;
	double y=x*pow((100+r)/100,p);
	cout << fixed << setprecision(2) << y << endl;
	return 0;
}