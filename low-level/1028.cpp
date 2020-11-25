/*
①0和任意自然数的最大公约数就是那个自然数。
②互质指最大公约数等于1的两个自然数。
③1和任意数互质。

Greatest Common Divisor 最大公约数
定理：gcd(a,b) = gcd(b,a mod b)  // a和b的最大公因数，a和b的大小没影响。

*/

#include <iostream>
#include <cassert>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    else 
        return gcd(b,a%b);
}

int main()
{
    int m, n;
    cin >> m >> n;
    assert(m>=1 && n>=1);
    if (1 == gcd (m, n)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
 
 

   
