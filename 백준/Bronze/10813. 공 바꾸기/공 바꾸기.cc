#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> baskets(n + 1);
    iota(baskets.begin(), baskets.end(), 0);
    for (int k = 0; k < m; ++k) {
        int i, j;
        cin >> i >> j;
        swap(baskets[i], baskets[j]);
    }
    for (int i = 1; i <= n; ++i) {
        cout << baskets[i] << " ";
    }
    cout << "\n";
    return 0;
}
