#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> lines(5);
    int max = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> lines[i];
        if (lines[i].length() > max) {
            max = lines[i].length();
        }
    }
    for (int j = 0; j < max; ++j) {
        for (int i = 0; i < 5; ++i) {
            if (j < lines[i].length()) {
                cout << lines[i][j];
            }
        }
    }
    cout << "\n";
    return 0;
}