#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> height(n);
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    stack<int> height_stack;

    for (int i = n - 1; i >= 0; i--) {

        int current_height = height[i];

        if (height_stack.empty() || current_height > height_stack.top()) {
            height_stack.push(current_height);
        }
    }

    cout << height_stack.size() << '\n';

    return 0;
}
