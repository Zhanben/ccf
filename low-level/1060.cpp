#include <iostream>
#include <string>
using namespace std;

int main()
{
    int b = 0;
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int minLen = min(str1.length(), str2.length());
    for (int x = 0; x < minLen; x++)
    {
        if (str1[x] == str2[x])
            cout << x + 1 << " ";
    }
    cout << endl;
    return 0;
}