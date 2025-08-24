#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> computer(N + 1);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        computer[a].push_back(b);
        computer[b].push_back(a);
    }

    vector<bool> visited(N + 1, false);
    const int first = 1;
    int answer = 0;

    stack<int> st;
    st.push(first);
    visited[first] = true;

    while (!st.empty()) {
        int cur = st.top();
        st.pop();

        for (int nxt : computer[cur]) {
            if (!visited[nxt]) {
                visited[nxt] = true;
                if (nxt != first) answer++;
                st.push(nxt);
            }
        }
    }

    cout << answer << '\n';
    return 0;
}
