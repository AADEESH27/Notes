#include <iostream>

int main()
{
    // Reference is just a alias to another variable used mostly with passing arrays to functions
    int x = 5;
    int &refTox = x;
    std::array<std::array<int, 5>, 5> matrix;
    // Pointer to array

    // 1 methond: generic
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrayPointer = arr;       // address of the first element of the array type: int*
    int (*pointerToArr)[5] = &arr; // address of the whole array might be similar to the above type: int (*)[5]
    // numerically they can be same but differ in type
    std::cout << "second element when the address of the whole array is stored in the pointer: " << (*pointerToArr)[1] << std::endl;
    std::cout << "second element when the address of first element is stored in the pointer: " << *(arrayPointer + 1) << std::endl;

    // 2 method: dynamically created array i.e. the array is stored in heap memory already returns address of the first element so no need for a pointer allocation separately
    int length = 5;
    int *heapArr = new int[length];
    for (int i = 0; i < length; i++)
    {
        *(heapArr + i) = (i + 1) * 10;
        // heapArr[i] = i * 10;
        std::cout << *(heapArr + i) << " ";
    }
    std::cout << std::endl;
    delete[] heapArr;
    return 0;
}