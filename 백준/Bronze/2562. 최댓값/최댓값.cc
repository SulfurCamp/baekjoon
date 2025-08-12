#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr(9);
    int max_val = 0, max_idx = 0;
    for (int i = 0; i < 9; ++i) {
        cin >> arr[i];
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_idx = i + 1;
        }
    }
    cout << max_val << "\n" << max_idx << "\n";
    return 0;
}
