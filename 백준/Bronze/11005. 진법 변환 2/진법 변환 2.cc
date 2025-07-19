#include <iostream>

using namespace std;

int main()
{
	int N, B;

	string result;

	cin >> N >> B;

	while (N)
	{
		if (N % B >= 0 && N % B <= 9)
		{
			result += char(N % B + '0');
		}
		else
		{
			result += char((N % B + 'A') - 10);
		}
		N /= B;
	}
	for (int i = result.length() - 1; i >= 0; i--)
	{
		cout << result[i];
	}
	return 0;
}