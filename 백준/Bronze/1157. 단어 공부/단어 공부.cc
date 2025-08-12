#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int freq[26] = {};
    for (char c : s) freq[toupper(c) - 'A']++;
    int max_freq = 0;
    char result = '?';
    for (int i = 0; i < 26; ++i) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            result = 'A' + i;
        } else if (freq[i] == max_freq) {
            result = '?';
        }
    }
    cout << result << "\n";
    return 0;
}
