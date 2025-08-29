#include <iostream>
#include <stack>

using namespace std;

struct Node 
{ 
    int r;
    int c; 
}; // 좌표 저장용 (행 r, 열 c)

int main() {
    
    int T;
    cin >> T;

    int dr[4] = {0, 0, 1, -1};
    int dc[4] = {1, -1, 0, 0};

    while (T--) {
        int M, N, K; // M: 가로(열 수), N: 세로(행 수)
        cin >> M >> N >> K;

        int grid[50][50] = {0};
        bool visited[50][50] = {false};

        for (int i = 0; i < K; ++i) {
            int x, y;
            cin >> x >> y;
            grid[y][x] = 1;
        }

        int worms = 0; 

        for (int r = 0; r < N; ++r) {
            for (int c = 0; c < M; ++c) {
                if (grid[r][c] == 1 && !visited[r][c]) {
                    // 새로운 덩어리 발견 → DFS 시작
                    worms++;
                    stack<Node> st;
                    st.push({r, c});
                    visited[r][c] = true;

                    // 반복적 DFS
                    while (!st.empty()) {
                        Node cur = st.top(); st.pop();

                        for (int k = 0; k < 4; ++k) {
                            int nr = cur.r + dr[k];
                            int nc = cur.c + dc[k];

                            if (0 <= nr && nr < N && 0 <= nc && nc < M
                                && grid[nr][nc] == 1 && !visited[nr][nc]) {
                                visited[nr][nc] = true;
                                st.push({nr, nc});
                            }
                        }
                    }
                }
            }
        }

        cout << worms << '\n';
    }

    return 0;
}