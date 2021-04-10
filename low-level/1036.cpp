#include<iostream>
using namespace  std;
int main()
{
   int n;
   cin>>n;
   while(n!=0)
   {
   	   cout<<"shang:"<<n/2<<" "<<"yu:"<<n%2<<endl;
   	   n/=2;
   }
   return 0;
}