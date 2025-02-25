#include<iostream>
#include<vector>

auto PassByReference(const int& a) -> void;

int main()
{
    std::vector<int> v;
    int a = 1;
    int& ref = a;
    std::cout << "value of ref " << ref << std::endl;
    std::cout << "value of a before function call " << a << std::endl;
    PassByReference(a);
    std::cout << "value of a after function call " << a << std::endl;
    return 0;
}

void PassByReference(const int& ref) {
    // ref = 2;
    std::cout << "value of ref in function " << ref << std::endl;
    return;
}