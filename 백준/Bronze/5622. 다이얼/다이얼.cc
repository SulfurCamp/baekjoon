#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    int time = 0;
    vector<int> dial = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    for (char c : s)
        time += dial[c - 'A'];
    cout << time << "\n";
    return 0;
}
