#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> adj[1001];
bool visit[1001];

void dfs(int v)
{
    visit[v] = true;
    cout << v << " ";
    for(int next : adj[v])
    {
        if(!visit[next])
        {
            dfs(next);
        }
    }
}
void bfs(int start) {
    bool visit[1001] = {false};
    queue<int> q;

    q.push(start);
    visit[start] = true;

    while (!q.empty()) {
        int v = q.front(); q.pop();
        cout << v << " ";
        for (int next : adj[v]) {
            if (!visit[next]) {
                visit[next] = true;
                q.push(next);
            }
        }
    }
}

int main()
{
    int N, M, V;

    cin >> N >> M >> V;

    for(int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 1; i <= N; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }

    dfs(V);
    cout << "\n";
    bfs(V);

}
