#include <iostream>

namespace me
{
    int x;
}
template <typename T, typename U>
T solve(T x, U y);

typedef std::vector<std::pair<std::string, int>> pairlist_t;

int main()
{
    int age;
    std::cin >> age;
    std::cout << age << std::endl;
    std::string name;
    std::getline(std::cin >> std::ws, name);
    std::cout << name << std::endl;
    pairlist_t p1;

    int x = 1;
    me::x = 2;
    std::cout << me::x;
    return 0;
}