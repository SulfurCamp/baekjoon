#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string str;
		cin >> str;
		stack<char> s;
		bool VPS = true;

		for (char c : str)
		{
			if (c == '(')
			{
				s.push(c);
			}
			else if (c == ')')
			{
				if (s.empty())
				{
					VPS = false;
					break;
				}
				s.pop();
			}
		}
		if (!s.empty())
		{
			VPS = false;
		}
		if (VPS)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}