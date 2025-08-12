#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> remainders;
    for (int i = 0; i < 10; ++i) {
        int n;
        cin >> n;
        remainders.insert(n % 42);
    }
    cout << remainders.size() << "\n";
    return 0;
}
