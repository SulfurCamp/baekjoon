#include <iostream>
#include <queue>

using namespace std;

static const int MAX = 100000;

int main()
{
    int N, K;
    if(!(cin >> N >> K))
    {
        return 0;
    }
    if(N == K)
    {
        cout << 0 << "\n";
        return 0;
    }


    static int dist[MAX + 1];

    for(int i = 0; i <= MAX; i++)
    {
        dist[i] = -1;
    }

    queue<int> q;
    dist[N] = 0;
    q.push(N);

    while(!q.empty())
    {
        int x = q.front();
        q.pop();

        int next_x;

        next_x = x - 1;
        if(next_x >= 0 && dist[next_x] == -1)
        {
            dist[next_x] = dist[x] + 1;
            if(next_x == K)
            {
                cout << dist[next_x] << "\n";
                return 0;
            }
            q.push(next_x);
        }
        next_x = x + 1;
        if(next_x <= MAX && dist[next_x] == -1)
        {
            dist[next_x] = dist[x] + 1;
            if(next_x == K)
            {
                cout << dist[next_x] << "\n";
                return 0;
            }
            q.push(next_x);
        }
        next_x = x * 2;
        if(next_x <= MAX && dist[next_x] == -1)
        {
            dist[next_x] = dist[x] + 1;
            if(next_x == K)
            {
                cout << dist[next_x] << "\n";
                return 0;
            }
            q.push(next_x);
        }
    }
    return 0;
}