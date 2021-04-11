#include <iostream>
using namespace std;

long long int a;    //小正方形边长
long long int n, m; //长方形的长和宽

int main()
{
    cin >> n >> m >> a;
    cout << (n / a) * (m / a);
    return 0;
}
