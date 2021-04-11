#include <iostream>
using namespace std;
int main()
{
	int i;
	string s;
	cin >> s;
	for (i = 0; i <= s.size() - 1; i++)
	{
		if (s[i] >= 65 && s[i] <= 87)
		{ //A-X
			s[i] = char(s[i] + 3);
		}
		else if (s[i] >= 88 && s[i] <= 90)
		{ //Y-Z
			s[i] = char(s[i] + 3 - 26);
		}
		else if (s[i] >= 97 && s[i] <= 119)
		{ //a-x
			s[i] = char(s[i] + 3);
		}
		else if (s[i] >= 120 && s[i] <= 122)
		{ //y-z
			s[i] = char(s[i] + 3 - 26);
		}
	}
	cout << s << endl;
	return 0;
}