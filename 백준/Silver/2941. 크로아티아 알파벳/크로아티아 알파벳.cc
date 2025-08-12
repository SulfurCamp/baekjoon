#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string patterns[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    for (string p : patterns) {
        size_t pos;
        while ((pos = s.find(p)) != string::npos)
            s.replace(pos, p.length(), "#");
    }
    cout << s.length() << "\n";
    return 0;
}
