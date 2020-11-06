#include<iostream>
using namespace  std;
int main()
{
	int a[5];
	int n,i,num=0;
    cin>>n;
    i=0;
    while(n!=0)
    {
    	i++;
    	num++;
		a[i]=n%10;
    	n/=10;
    	
    }
    cout<<num<<endl;
    for(i=num;i>=1;i--)
       cout<<a[i]<<endl;
   return 0;
}