#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {

    int T; 
    cin >> T;
    while (T--) {
        int M, N, K;
        cin >> M >> N >> K;

        const int SZ = N * M;
        vector<char> g(SZ, 0);     
        vector<char> vis(SZ, 0);   

        
        for (int i = 0; i < K; ++i) {
            int X, Y; cin >> X >> Y;
            g[Y * M + X] = 1;
        }

        int worms = 0;
        
        for (int idx = 0; idx < SZ; ++idx) {
            if (!g[idx] || vis[idx]) continue;

            ++worms;
            queue<int> q;
            vis[idx] = 1;
            q.push(idx);

            while (!q.empty()) {
                int cur = q.front(); q.pop();
                int r = cur / M, c = cur % M;

                if (r - 1 >= 0) {
                    int nidx = (r - 1) * M + c;
                    if (g[nidx] && !vis[nidx]) { vis[nidx] = 1; q.push(nidx); }
                }
                if (r + 1 < N) {
                    int nidx = (r + 1) * M + c;
                    if (g[nidx] && !vis[nidx]) { vis[nidx] = 1; q.push(nidx); }
                }
                if (c - 1 >= 0) {
                    int nidx = r * M + (c - 1);
                    if (g[nidx] && !vis[nidx]) { vis[nidx] = 1; q.push(nidx); }
                }
                if (c + 1 < M) {
                    int nidx = r * M + (c + 1);
                    if (g[nidx] && !vis[nidx]) { vis[nidx] = 1; q.push(nidx); }
                }
            }
        }

        cout << worms << '\n';
    }
    return 0;
}
