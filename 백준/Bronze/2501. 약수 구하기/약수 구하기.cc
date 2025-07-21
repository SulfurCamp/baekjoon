#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int P, Q;

	int cnt = 0;

	vector<int> v;

	cin >> P >> Q;

	for (int i = 1; i <= P; i++)
	{
		if (P % i == 0)
		{
			v.push_back(i);
			cnt++;
		}
	}
	if (cnt < Q)
		cout << 0;
	else
		cout << v[Q - 1];
	return 0;
}