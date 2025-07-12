#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> pos(26, -1);
    for (int i = 0; i < s.length(); ++i)
        if (pos[s[i] - 'a'] == -1)
            pos[s[i] - 'a'] = i;
    for (int i : pos) cout << i << " ";
    cout << "\n";
    return 0;
}
