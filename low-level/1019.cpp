#include<iostream>
#include <iomanip>  //用来控制cin，cout的输入输出格式的库
using namespace std;
int main(){
	double a,x;
	cin>>a;
	if(0<=a&&a<5){
		x=a+2.5;
	}else if(5<=a&&a<10){
		x=2-1.5*(a-3)*(a-3);
	}else{
		x=a/2-1.5;
	}
	cout <<fixed<<setprecision(3) << x <<endl; //先设置精度，再输出
	return 0;
}