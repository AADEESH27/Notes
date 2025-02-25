#include<iostream>

int main(){
    //Reference is just a alias to another variable used mostly with passing arrays to functions
    int x = 5;
    int &refTox = x;
     std::array<std::array<int, 5>, 5> matrix;
    // Pointer to array

    //1 methond: generic
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrayPointer = arr;
    int(*pointerToArr)[5] = &arr;
    std::cout << "second element when the address of the whole array is stored in the pointer: "<<(*pointerToArr)[1] << std::endl;
    std::cout << "second element when the address of first element is stored in the pointer: " << *(arrayPointer + 1) << std::endl;
        // 2 method: dynamically created array i.e. the array is stored in heap memory already returns address so no need for a pointer allocation separately
        int length = 5;
        int *heapArr = new int[length];
        for (int i = 0; i < length; i++)
        {
            heapArr[i] = i * 10; // Example values
    }
    delete[] heapArr;
    return 0;
}