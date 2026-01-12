#include <iostream>

// 1byte = 8bits
//  Size of all the pointers is 8bytes further depends on the architecture of machine 32bit or 64bit system, 32 and 64 refer to the memory size.
int main()
{
    int x = 1;
    int *px = &x;
    std::cout << "address of x: " << &x << std::endl;
    std::cout << "value of x: " << *px << std::endl;
    std::cout << sizeof(int *) << std::endl;
    std::cout << sizeof(int) << std::endl;
    return 0;
}