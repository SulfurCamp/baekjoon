#include <iostream>

using namespace std;

int main()
{
	int N;
	int dot = 2;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		dot = dot * 2 - 1;
	}
	cout << dot * dot << endl;

	return 0;
}
