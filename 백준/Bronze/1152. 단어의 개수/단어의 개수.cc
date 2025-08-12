#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    string word;
    int count = 0;
    while (ss >> word) count++;
    cout << count << "\n";
    return 0;
}
