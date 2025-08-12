#include <iostream>

int main() {
    int x, n, total = 0;
    std::cin >> x >> n;
    for (int i = 0; i < n; ++i) {
        int a, b;
        std::cin >> a >> b;
        total += a * b;
    }
    if (total == x) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}