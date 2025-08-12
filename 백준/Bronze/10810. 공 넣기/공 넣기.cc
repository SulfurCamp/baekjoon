#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> baskets(n + 1, 0);
    for (int l = 0; l < m; ++l) {
        int i, j, k;
        cin >> i >> j >> k;
        for (int a = i; a <= j; ++a) {
            baskets[a] = k;
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << baskets[i] << " ";
    }
    cout << "\n";
    return 0;
}
