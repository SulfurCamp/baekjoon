#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    stack<int> s;

    while (N--) {
        int stack;
        cin >> stack;

        switch (stack) {
        case 1:
        {
            int x;
            cin >> x;
            s.push(x);
            break;
        }
        case 2:
        {
            if (s.empty()) cout << -1 << '\n';
            else {
                cout << s.top() << '\n';
                s.pop();
            }
            break;
        }
        case 3:
            cout << s.size() << '\n';
            break;
        case 4:
            cout << (s.empty() ? 1 : 0) << '\n';
            break;
        case 5:
            cout << (s.empty() ? -1 : s.top()) << '\n';
            break;
        }
    }

    return 0;
}
