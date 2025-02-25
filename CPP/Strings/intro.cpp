#include <iostream>

int main()
{
    // int age;
    // std::cin >> age;
    // std::cout << age << std::endl;
    // std::string name;
    // std::getline(std::cin >> std::ws, name);
    // std::cout << name << std::endl;

    int age;
    std::cin >> age;
    std::cout << age << std::endl;
    std::string name;
    std::getline(std::cin, name);
    std::cout << name << std::endl;
    return 0;
}