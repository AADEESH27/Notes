#include <iostream>
#include <vector>

void printArray(const std::vector<int> &vector)
{
    std::cout << "First element: " << vector[0] << std::endl;
    return;
}

void printArrayWithPointer(const int *arr, int size)
{
    std::cout << "First element: " << arr[0] << std::endl;
    // std::cout << "First element: " << *(arr + 1)<< std::endl;
    return;
}

void printSTLArray(const std::array<int, 100> &myStlArray)
{
    std::cout << "First element: " << myStlArray[0] << std::endl;
    return;
}
int main()
{
    std::vector<int> myVector(5, 0);
    // when array is passed to a function it decays into a pointer to the first element of the array eg: function name(int* arr)
    int myArray[5] = {1, 2, 3, 4, 5};
    std::array<int, 100> myStlArray = {1, 2, 3, 4, 5};
    printArray(myVector);
    printArrayWithPointer(myArray, 5);
    printSTLArray(myStlArray);
    std::cout << myArray << std::endl;       // pointer to 1st element 0th index type = int *
    std::cout << (myArray + 1) << std::endl; // pointer to 2nd element 1st index
    std::cout << &myArray << std::endl;      // pointer to the whole array space, type = int (*)[size]
    return 0;
}