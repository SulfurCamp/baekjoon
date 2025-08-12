#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> H(N);
    for(int i = 0; i < N; i++)
    {
        cin >> H[i];
    }
    vector<int> answer(N);
    stack<int> st;

    for(int i = 0; i < N; i++)
    {
        while(!st.empty() && H[st.top()] <= H[i])
            st.pop();
        
        answer[i] = st.empty() ? 0 : (st.top() + 1);
        
        st.push(i);
     }
     for(int i = 0; i < N; i++)
     {
        if(i)
            cout << ' ';
        cout << answer[i];
     }
     cout << '\n';
     return 0;
}