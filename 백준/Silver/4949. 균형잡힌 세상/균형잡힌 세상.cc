#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    while (true) {
        string s;
        getline(cin, s); // 한 줄 전체를 입력받음 (공백 포함)

        // 종료 조건: 입력으로 "." 하나만 들어온 경우
        if (s == ".") {
            break;
        }

        stack<char> st;
        bool isBalanced = true; // 균형 여부를 저장할 변수

        for (char c : s) {
            if (c == '(' || c == '[') {
                // 여는 괄호는 스택에 push
                st.push(c);
            } else if (c == ')') {
                // 닫는 소괄호 처리
                if (st.empty() || st.top() != '(') {
                    isBalanced = false;
                    break;
                }
                st.pop();
            } else if (c == ']') {
                // 닫는 대괄호 처리
                if (st.empty() || st.top() != '[') {
                    isBalanced = false;
                    break;
                }
                st.pop();
            }
        }

        // 문자열을 다 순회한 후에도 스택에 여는 괄호가 남아있으면 균형이 안 맞음
        if (!st.empty()) {
            isBalanced = false;
        }

        if (isBalanced) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }

    return 0;
}
