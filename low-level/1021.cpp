#include<iostream>
#include <iomanip> 
using namespace std;
int main(){
	double money,sum=0;
	cin>>money;
	if(money<=100000)
		sum += money*0.1;
	else if(money<=200000)
		sum += 100000*0.1 + (money-100000)*0.075;
	else if(money<=400000)
		sum += 100000*0.1 + 100000*0.075 + (money-200000)*0.05;
	else if(money<=600000)
		sum += 100000*0.1 + 100000*0.075 + 200000*0.05 + (money-400000)*0.03;
	else if(money<=1000000)
		sum += 100000*0.1 + 100000*0.075 + 200000*0.05 + 200000*0.03 + (money-600000)*0.015;
	else
		sum += 100000*0.1 + 100000*0.075 + 200000*0.05 + 200000*0.03 + 400000*0.015 + (money-1000000)*0.01;
	cout<<fixed<<setprecision(3)<<sum<<endl;
	return 0;
}