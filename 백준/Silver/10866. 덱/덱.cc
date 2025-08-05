#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    deque<int> d;

    for(int i = 0; i < N; i++)
    {
        string command;
        cin >> command;

        if(command == "push_front")
        {
            int x;
            cin >> x;
            d.push_front(x);
        }
        else if(command == "push_back")
        {
            int x;
            cin >> x;
            d.push_back(x);
        }
        else if(command == "pop_front")
        {
            if(d.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << d.front() << '\n';
                d.pop_front();
            }
        }
        else if(command == "pop_back")
        {
            if(d.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << d.back() << '\n';
                d.pop_back();
            }
        }
        else if(command == "size")
        {
            cout << d.size() << '\n';
        }
        else if(command == "empty")
        {
            cout << d.empty() << '\n';
        }
        else if(command == "front")
        {
            if(d.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << d.front() << '\n';
            }
        }
        else if(command == "back")
        {
            if(d.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << d.back() << '\n';
            }
        }
    }
    return 0;
}