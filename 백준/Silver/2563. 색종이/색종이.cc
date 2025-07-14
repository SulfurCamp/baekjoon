#include <iostream>

using namespace std;

int main() {
    bool canvas[100][100] = { false };
    int num;
    cin >> num;
    int black = 0;

    for (int k = 0; k < num; k++) {
        int x, y;
        std::cin >> x >> y;
        for (int i = y; i < y+10; i++) {
            for (int j = x; j < x+10; j++) {
                if (!canvas[i][j]) {
                    canvas[i][j] = true;
                    black++;
                }
            }
        }
    }
    cout << black << std::endl;
    return 0;
}
