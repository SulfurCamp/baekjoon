#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<double> scores(n);
    double max_score = 0;
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }
    for (int i = 0; i < n; ++i) {
        sum += (scores[i] / max_score) * 100;
    }
    cout << sum / n << "\n";
    return 0;
}
