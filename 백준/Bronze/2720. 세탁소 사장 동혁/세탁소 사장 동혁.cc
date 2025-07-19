#include <iostream>

using namespace std;

int main()
{
	int T;

	cin >> T;

	while (T--)
	{
		int C;
		cin >> C;

		int quarter = C / 25;
		C %= 25;

		int dime = C / 10;
		C %= 10;

		int nickel = C / 5;
		C %= 5;

		int penny = C;

		cout << quarter << " " << dime << " " << nickel << " " << penny << endl;
	}
	return 0;
}