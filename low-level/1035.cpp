#include<iostream> 
using namespace std;

int CalculateSum(int n)
{
  	int s=0;
	while(n){
		s+=n%10;
		n/=10;
	}
	return s;	
}


int main()
{
	int n;
	cin>>n;
	do{
		n=CalculateSum(n);
	}while(n>=10);
	cout<<n;
	return 0;	
}