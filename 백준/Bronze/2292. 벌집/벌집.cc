#include <iostream>

using namespace std;

int main()
{
	int count = 1;
	int layer = 1;
	int N;

	cin >> N;

	while (true)
	{
		if (N > layer)
		{
			layer += 6 * count;
			count++;
		}
		else
		{
			cout << count << endl;
			break;
		}
	}
	return 0;
}