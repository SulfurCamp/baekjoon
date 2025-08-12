#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << s.front() << s.back() << "\n";
    }
    return 0;
}
