#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int x,y;
	cin >> x;
	y = x % 123;
	if (y <= 122 && y >= 97) {
		cout << char(y);
	}
	else {
		y = x % 91;
		if (y <= 90 && y >= 65) {
			cout << char(y);
		}
		else {
			cout << "*";
		}
	}

	return 0;
}