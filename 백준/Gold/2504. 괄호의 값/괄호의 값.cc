#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string s;
    
    if(!(cin>>s))
    {
        return 0;
    }      
    
    stack<int> st;
    for(char c : s)
    {
        if(c == '(')
        {
            st.push(-2); // ( -2 [ -3 부분값은 양수임
        }
        else if(c == '[')
        {
            st.push(-3);
        }
        else if(c == ')')
        {
            if(st.empty())
            {
                cout << 0 << "\n";
                return 0;
            }
            if(st.top() == -2) // () 이 맞은 경우
            {
                st.pop();
                st.push(2);
            }
            else
            {
                int sum = 0;
                while(!st.empty() && st.top() > 0)
                {
                    sum += st.top();
                    st.pop();
                }
                if(st.empty() || st.top() != -2)
                {
                    cout << 0 << "\n";
                    return 0;
                }
                st.pop();
                st.push(sum*2);
            }
        }
        else if(c == ']')
        {
            if(st.empty())
            {
                cout << 0 << "\n";
                return 0;
            }
            if(st.top() == -3)
            {
                st.pop();
                st.push(3);
            }
            else
            {
                int sum = 0;
                while(!st.empty() && st.top() > 0)
                {
                    sum += st.top();
                    st.pop();
                }
                if(st.empty() || st.top() != -3)
                {
                    cout << 0 << "\n";
                    return 0;
                }
                st.pop();
                st.push(sum*3);
            }
        }
        else
        {
            cout << 0 << "\n";
            return 0;
        }
    }
    long long answer = 0;
    while(!st.empty())
    {
        if(st.top() < 0)
        {
            cout << 0 << "\n";
            return 0;
        }
        answer += st.top();
        st.pop();
    }
    cout << answer << "\n";
    return 0;
}