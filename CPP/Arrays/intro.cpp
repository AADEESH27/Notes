#include <iostream>
#include <array>

void func1(int *arr, int size);
void func2(const std::array<int, 100> &seats);

int main()
{
    std::cout << "In main\n";
    std::array<int, 100> seats{}; // STL implementation used more these days does not decay into a pointer when passed to a function also it is value initialized so the values are set to 0 initially
    for (int i = 0; i < 10; i++)
    {
        seats[i] = i;
    }
    int arrStack[5] = {1, 2, 3, 4, 5};               // C-style array
    int size = sizeof(arrStack) / sizeof(*arrStack); // As the array decays into a pointer so it will not return the size of array use vector or stl array
    for (int i = 0; i < size; i++)
    {
        std::cout << *(arrStack + i) << std::endl; // Under the hood this is how arr[i] works
    }
    func1(arrStack, size);
    func2(seats);

    // Heap memory allocation
    int *arrHeap = new int[10];
    delete[] arrHeap;
}

void func1(int *arr, int size)
{
    std::cout << "In Function 1\n";

    for (int i = 0; i < size; i++)
    {
        std::cout << *(arr + i) << std::endl;
    }
    return;
}

void func2(const std::array<int, 100> &seats)
{
    std::cout << "In Function 2\n";

    for (int i = 0; i < 100; i++)
    {
        std::cout << seats[i] << std::endl;
    }
    return;
}