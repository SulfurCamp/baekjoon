#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int a, b;
    while (true) {
        std::cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        std::cout << a + b << " ";
    }
    return 0;
}