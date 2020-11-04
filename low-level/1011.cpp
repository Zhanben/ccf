#include<iostream>
using namespace std;

int main()
{
	float x,y;
	cin>>x>>y;
	if(-1<=x && x<=1 && -1<=y && y<=1){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}

/*

&& 且，同时满足才成立
|| 或， 两边有一个条件成立，就结果为真
！ 非， 取反向， a == b  a!=b
*/