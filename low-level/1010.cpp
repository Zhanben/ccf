#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int wei;
	float result;
	cin >> wei;

	if (wei > 30)
	{
		cout << "Fail" << endl;
	}
	else
	{
		if (wei <= 10)
			result = 0.8 * wei;
		else if (wei <= 20)
			result = 0.8 * 10 + 0.75 * (wei - 10);
		else if (wei <= 30)
			result = 0.8 * 10 + 0.75 * 10 + 0.7 * (wei - 20);

		cout << fixed << setprecision(2) << result + 0.2 << endl;
	}
	return 0;
}