#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    string s;
    cin >> n >> s;
    for (char c : s) sum += c - '0';
    cout << sum << "\n";
    return 0;
}
