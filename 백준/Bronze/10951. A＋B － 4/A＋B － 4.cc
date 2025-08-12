#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int a, b;
    while (std::cin >> a >> b) {
        std::cout << a + b << " ";
    }
    return 0;
}