#include <iostream>
#include <string>

using namespace std;

int main(int argv, char argc[])
{
	string N;
	int B;

	cin >> N >> B;

	long result = 0;
	int i = 0;
	int res = N.length();

	while (i < res)
	{
		char c = N[i];
		if (c >= '0' && c <= '9')
		{
			result = result * B + (c - '0');
		}
		else
		{
			result = result * B + (c - 'A' + 10);
		}
		i++;
	}
	cout << result << endl;

	return 0;
}
