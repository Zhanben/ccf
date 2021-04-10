#include <iostream>
using namespace std;

int main(){
    int n;
    int cards[14]={0}; // 1, 2, 3, 4, ..., 11, 12, 13

    for(int i=1; i<=25; i++){
        cin >> n;
        cards[n]++;
    }
    for(int i=1; i<=13; i++){
        if (cards[i] < 2)   //正常情况下，每种牌都是两张的
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}






/*取巧的方法*/
/*
#include <iostream>
#define NUM (1+13)*13
using namespace std;
int main()
{
    int n,sum=0;
    for(int i=1;i<26;i++)
    {
        cin>>n;
        sum+=n;
    }
    cout<<NUM-sum<<endl;
    return 0;
}
*/

