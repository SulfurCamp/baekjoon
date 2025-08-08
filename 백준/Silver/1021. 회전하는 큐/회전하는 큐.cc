#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    deque<int> dq;
    vector<int> targets(M);
    //양방향 큐 초기화 1~N
    for (int i = 1; i <= N; ++i)
        dq.push_back(i);
    //원소 번호 저장할 벡터
    for (int i = 0; i < M; ++i)
        cin >> targets[i];

    int result = 0;
    //뽑을 원소를 돌면서 처리
    for (int i = 0; i < M; ++i) {
        int target = targets[i];
        int idx = 0;

        for (int j = 0; j < dq.size(); ++j) {
            if (dq[j] == target) {
                idx = j;
                break;
            }
        }

        if (idx <= dq.size() / 2) {
            while (dq.front() != target) {
                dq.push_back(dq.front());
                dq.pop_front();
                result++;
            }
        }
        else {
            while (dq.front() != target) {
                dq.push_front(dq.back());
                dq.pop_back();
                result++;
            }
        }
        dq.pop_front();
    }

    cout << result << '\n';
    return 0;
}
