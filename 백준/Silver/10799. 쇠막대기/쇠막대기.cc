#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{

	stack<char> s;
	string str;

	int razer = 0;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
		{
			s.push('(');
		}
		else
		{
			s.pop();
			if (str[i - 1] == '(')
			{
				razer += s.size();
			}
			else
			{
				
				razer++;
			}
		}
	}
	cout << razer << '\n';
	return 0;
}