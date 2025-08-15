#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int SIZE = N * M;

    vector<int> SZ(SIZE);
    queue<int> q;

    int unripen = 0;  // 익지 않은 토마토 수
    int lastday = 1;  // 시작값 1 -> 정답은 (최대값 - 1)

    // 입력: 단일 루프
    for (int i = 0; i < SIZE; i++) {
        cin >> SZ[i];
        if (SZ[i] == 1) {
            q.push(i);           // 시작점(동시 시작)
        } else if (SZ[i] == 0) {
            unripen++;           // 안 익은 개수
        }
    }

    // 처음부터 모두 익어있으면 0일
    if (unripen == 0) {
        cout << 0 << '\n';
        return 0;
    }

    // BFS
    while (!q.empty()) {
        int current = q.front();
        q.pop();

        int row = current / M;
        int col = current % M;   // <-- 고침: '&'가 아니라 '%'

        int next_row, next_col;  // 한 번만 선언

        // 상
        next_row = row - 1; next_col = col;
        if (next_row >= 0) {
            int next_index = next_row * M + next_col;
            if (SZ[next_index] == 0) {
                SZ[next_index] = SZ[current] + 1;   // <-- 고침: 대입 '='
                if (SZ[next_index] > lastday) lastday = SZ[next_index];
                unripen--;
                q.push(next_index);
            }
        }

        // 하
        next_row = row + 1; next_col = col;
        if (next_row < N) {
            int next_index = next_row * M + next_col;
            if (SZ[next_index] == 0) {
                SZ[next_index] = SZ[current] + 1;
                if (SZ[next_index] > lastday) lastday = SZ[next_index];
                unripen--;
                q.push(next_index);
            }
        }

        // 좌
        next_row = row; next_col = col - 1;
        if (next_col >= 0) {
            int next_index = next_row * M + next_col;
            if (SZ[next_index] == 0) {
                SZ[next_index] = SZ[current] + 1;
                if (SZ[next_index] > lastday) lastday = SZ[next_index];
                unripen--;
                q.push(next_index);
            }
        }

        // 우
        next_row = row; next_col = col + 1;
        if (next_col < M) {
            int next_index = next_row * M + next_col;
            if (SZ[next_index] == 0) {
                SZ[next_index] = SZ[current] + 1;
                if (SZ[next_index] > lastday) lastday = SZ[next_index];
                unripen--;
                q.push(next_index);
            }
        }
    }

    // 결과
    if (unripen == 0) cout << (lastday - 1) << '\n';
    else cout << -1 << '\n';

    return 0;
}
