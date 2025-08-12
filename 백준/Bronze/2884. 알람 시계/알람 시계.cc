#include <iostream>

int main() {
    int h, m;
    std::cin >> h >> m;
    m -= 45;
    if (m < 0) {
        m += 60;
        h -= 1;
        if (h < 0) {
            h = 23;
        }
    }
    std::cout << h << " " << m << std::endl;
    return 0;
}