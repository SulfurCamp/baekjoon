#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    int b0 = b % 10;
    int b1 = (b / 10) % 10;
    int b2 = b / 100;
    std::cout << a * b0 << std::endl;
    std::cout << a * b1 << std::endl;
    std::cout << a * b2 << std::endl;
    std::cout << a * b << std::endl;
    return 0;
}