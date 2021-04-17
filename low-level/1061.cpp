#include <iostream>
using namespace std;

int main()
{
    char flag;
    string passwd;
    while (1)
    {
        cin >> flag;
        if (flag == 'N')
            break;
        else
        {
            cin >> passwd;
            if (passwd == "NOIP@CCF")
            {
                cout << "Success" << endl;
                break;
            }
            else
                cout << "Sorry" << endl;
        }
    }
    return 0;
}