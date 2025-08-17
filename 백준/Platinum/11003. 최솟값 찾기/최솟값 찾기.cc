#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, L;
    cin >> N >> L;

    vector<int> A(N);
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    deque<int> deque;
    for(int i = 0; i < N; i++)
    {
        while(!deque.empty() && A[deque.back()] >= A[i]) {
            deque.pop_back();
        }
        deque.push_back(i);

        int left = i - L + 1;

        while(!deque.empty() && deque.front() < left)
        {
            deque.pop_front();
        }

        cout << A[deque.front()];
        if(i != N-1)
            cout << ' ';
        
    }

    cout << '\n';
    return 0;

}