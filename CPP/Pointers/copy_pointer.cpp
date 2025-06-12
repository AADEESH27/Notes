#include <iostream>

int main()
{
    int *a = new int(10);
    int *b = a; // Shallow copy;
    std::cout << *b << std::endl;
    *a = 20;
    std::cout << *b << std::endl;
    // Output -> 10 20

    // How to avoid -> deep copy create a new block in heap with the values similar to a

    int *c = new int(10);
    int *d = new int(*c);
    std::cout << *d << std::endl;
    *c = 20;
    std::cout << *d << std::endl;
    return 0;
}