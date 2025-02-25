#include <iostream>

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
    return 0;
}