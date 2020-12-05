#include <iostream>
using namespace std;

//正常思维
int main(){
    int n,a,b,c,sum=0;
   cin>>n;
    for(a=0;a<=n/50;a++){
        for(b=0;b<=n/20;b++){
            for(c=0;c<=n/10;c++){
                if(a*50+b*20+c*10==n){
                    sum++;
                }
            }
        }
    }
   cout<<sum;
    return 0;
}

//优化
int main(){
	int n,sum;
	cin>>n;
	for(int i=0;i<=n/50;i++){
		sum+=(n-i*50)/20+1;
	}
	cout<<sum;
	return 0;
}

//再优化
int main(){
	int n;
	cin>>n;
	n/=100;
	cout<<5*n*n+n*4+1;
}