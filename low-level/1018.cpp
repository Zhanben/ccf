#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double y, t;
    cin >> y;
    if (y <= 0.5)
    {
        t = 3;
    }
    else
    {
        t = 3 + (y - 0.5) / 0.2;
    }
    cout << ceil(t) << endl;
    return 0;
}