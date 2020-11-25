//暴力法，结果超时

#include<iostream>
using namespace std;
int main()
{
	long long n;
	int total=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) total++;
	}
	cout<<total<<endl;
	return 0;
}



/*
若a*b=n，且a>b,则a和b都是n的因子，所以只需要用1到sqrt(n)进行试探即可。
同时需要注意，若a*a=n则a为n的因子（只计数1次）；若a*b=n且a!=b则需要计数2次。

如果数不为1，则其因子数起码有两个，（自身和1）
然后从i=2开始到sqrt(num)做循环，如果num%i==0,则因子数+2
当然如果两个因子数相同，是必须要去重的
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){	
	long long n;
	int total = 2;
	cin>>n;
	if (n == 1){
		cout<<1<<endl;
		return 0;
	}
	for(int i=2; i<=sqrt(n); i++)
	{
        if(n%i==0){
            if(i==sqrt(n)){ 
                total++;  //如果两因子相同，则只加1 
            }else{	
				total+=2;
			}
        }
	}
	cout<<total<<endl;
	return 0;
}

//约数个数定理法
#include<iostream>
#include<math.h>
using namespace std;

int main(){	
	long long n;
	int total = 1;
	cin>>n;
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            int x=0;
            while(n%i==0){
                n/=i;
                x++;
			}
            total *= (x+1);
        }
    }    
	if(n>1) {
		total*=2;
	}
	cout<<total<<endl;
	return 0;
}
