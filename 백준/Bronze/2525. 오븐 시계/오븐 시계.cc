#include <iostream>

int main() {
    int h, m, c;
    std::cin >> h >> m >> c;
    m += c;
    h += m / 60;
    m %= 60;
    h %= 24;
    std::cout << h << " " << m << std::endl;
    return 0;
}