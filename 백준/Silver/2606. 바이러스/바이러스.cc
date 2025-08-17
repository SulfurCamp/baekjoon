#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int bfs_count(const vector<vector<int>>& computer, int first)
{
    int n = (int)computer.size();
    vector<bool> visit(n, false);

    queue<int> queue;
    queue.push(first);

    int current = 0;

    while(!queue.empty())
    {
        int k = queue.front();
        queue.pop();
    
        for(int v : computer[k])
        {
            if(!visit[v])
            {
                visit[v] = true;
                queue.push(v);

                if(v != first)
                    current++;
            }
        }
    }
    return current;
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> computer(N+1);

    for(int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        computer[a].push_back(b);
        computer[b].push_back(a);
    }

    const int first = 1;
    int answer = bfs_count(computer, first);

    cout << answer << '\n';
    return 0;

}
