#include <iostream>

// How are structures different from Class?
// -> By default access is public
// Memory = Total memory consumed by all the members
struct Rectangle
{
    int length;
    int breadth;
    char color;
};

int main()
{
    std::cout << sizeof('A') << std::endl; // 1byte in general
    struct Rectangle r1 = {18, 3};
    struct Rectangle *r2 = new Rectangle();
    *r2 = {10, 5};
    std::cout << r2->length << std::endl;
    Rectangle r3[66];
    std::cout << sizeof(r1) << std::endl; // Here a char takes 4bytes under the hood it is easier to allocate bytes in multiple of 4 so 4bytes are assigned but only 1byte is used this concept is called PADDING
    return 0;
}