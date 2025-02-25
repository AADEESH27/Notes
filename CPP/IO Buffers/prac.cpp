#include <iostream>

int main() {
    int a {};
    char b {};
    char c{};
    {
        a = 23;
        std::cout << a << "\n";
    }
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    std::cout << b + c << "\n";
    return 0;
}