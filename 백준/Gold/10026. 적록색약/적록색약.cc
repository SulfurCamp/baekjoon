#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct Node { int r, c; };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; 
    cin >> N;

    char grid[100][100];
    char gridRG[100][100];
    bool visited[100][100] = {false};
    bool visitedRG[100][100] = {false};

    for (int r = 0; r < N; ++r) {
        string row; cin >> row;
        for (int c = 0; c < N; ++c) {
            grid[r][c]   = row[c];
            gridRG[r][c] = (row[c] == 'G') ? 'R' : row[c]; // G를 R로 통합
        }
    }

    int dr[4] = {0, 0, 1, -1};
    int dc[4] = {1, -1, 0, 0};

    int normal = 0, colorWB = 0;

    // 바깥 이중 루프는 1번만: 각 시야별 DFS는 필요할 때만 시작
    for (int sr = 0; sr < N; ++sr) {
        for (int sc = 0; sc < N; ++sc) {

            // 일반 시야 DFS 시작 조건
            if (!visited[sr][sc]) {
                ++normal;
                char color = grid[sr][sc];
                stack<Node> st;
                st.push({sr, sc});
                visited[sr][sc] = true;

                while (!st.empty()) {
                    Node cur = st.top(); st.pop();
                    for (int k = 0; k < 4; ++k) {     // ← k++ 주의!
                        int nr = cur.r + dr[k];
                        int nc = cur.c + dc[k];
                        if (0 <= nr && nr < N && 0 <= nc && nc < N
                            && !visited[nr][nc]
                            && grid[nr][nc] == color) {
                            visited[nr][nc] = true;
                            st.push({nr, nc});
                        }
                    }
                }
            }

            // 적록색약 시야 DFS 시작 조건
            if (!visitedRG[sr][sc]) {
                ++colorWB;
                char color = gridRG[sr][sc];
                stack<Node> st;
                st.push({sr, sc});
                visitedRG[sr][sc] = true;

                while (!st.empty()) {
                    Node cur = st.top(); st.pop();
                    for (int k = 0; k < 4; ++k) {     // ← k++ 주의!
                        int nr = cur.r + dr[k];
                        int nc = cur.c + dc[k];
                        if (0 <= nr && nr < N && 0 <= nc && nc < N
                            && !visitedRG[nr][nc]
                            && gridRG[nr][nc] == color) {
                            visitedRG[nr][nc] = true;
                            st.push({nr, nc});
                        }
                    }
                }
            }

        }
    }

    cout << normal << ' ' << colorWB << '\n';
    return 0;
}