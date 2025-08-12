#include <iostream>
using namespace std;

bool isGroupWord(const string& s) {
    bool used[26] = {};
    for (size_t i = 0; i < s.length(); ++i) {
        if (used[s[i] - 'a']) return false;
        if (i + 1 == s.length() || s[i] != s[i + 1])
            used[s[i] - 'a'] = true;
    }
    return true;
}

int main() {
    int n, count = 0;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (isGroupWord(s)) count++;
    }
    cout << count << "\n";
    return 0;
}
