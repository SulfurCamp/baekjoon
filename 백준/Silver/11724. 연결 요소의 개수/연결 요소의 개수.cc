
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> adj(N + 1);
    vector<bool> visited(N + 1, false);

    // 그래프 입력 (무방향)
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int components = 0;

    // 모든 정점에 대해 연결 요소 탐색
    for (int start = 1; start <= N; ++start) {
        if (!visited[start]) {
            // 새로운 연결 요소 발견 → DFS 시작
            ++components;
            stack<int> st;
            st.push(start);
            visited[start] = true;

            while (!st.empty()) {
                int cur = st.top(); st.pop();

                // 인접 정점 순회
                for (int nxt : adj[cur]) {
                    if (!visited[nxt]) {
                        visited[nxt] = true;
                        st.push(nxt);
                    }
                }
            }
        }
    }

    cout << components << '\n';
    return 0;
}
