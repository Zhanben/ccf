#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    x += x * 1000;
    x = x / 7 / 11 / 13;

    cout << x;
    return 0;
}