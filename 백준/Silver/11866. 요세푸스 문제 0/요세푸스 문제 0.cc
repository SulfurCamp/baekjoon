#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    queue<int> q;

    for(int i = 1; i <= N; i++) 
    {
        q.push(i);
    }

    cout << "<";

    while(!q.empty())
    {
        for(int i = 0; i < K-1; i++)
        {
            q.push(q.front());
            q.pop();
        }

        int rm = q.front();
        q.pop();

        cout << rm;
        if(!q.empty())
        {
            cout << ", ";
        }
    }
    cout << ">" << endl;

    return 0;
}
