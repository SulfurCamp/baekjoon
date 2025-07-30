#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<int> s;
    string operations;
    int stack_num = 1;

    // n개의 수열을 입력받으면서 바로 처리
    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;

        while (stack_num <= number)
        {
            s.push(stack_num);
            operations += "+\n";
            stack_num += 1;

        }
        if (s.top() == number)
        {
            s.pop();
            operations += "-\n";
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << operations;

    return 0;
}
