#include<iostream>
#include<vector>

void printArray(std::vector<int>& vector)
{
    std::cout << "First element: " << vector[0] << std::endl;
    return;
}

void printArrayWithPointer(int *arr, int size) {
    std::cout << "First element: " << *(arr + 2 )<< std::endl;
    return;
}

void printSTLArray(std::array<int, 100> &myStlArray){
    myStlArray[80] = 200;
    std::cout << "First element: " << myStlArray[98] << std::endl;
    return;
}
int main(){
    //when array is passed to a function it decays into a pointer to the first element of the array eg: function name(int* arr)
    int array[5]= {1, 2, 3, 4, 5};
    std::vector<int> myVector(5, 0);
    int myArray[5] = {1, 2, 3, 4, 5};
    std::array<int, 100> myStlArray = {1, 2, 3, 4, 5};
    printArray(myVector);
    printArrayWithPointer(myArray, 5);
    printSTLArray(myStlArray);
    std::cout << myArray << std::endl; //pointer to 1st element 0th index type = int *
    std::cout << (myArray + 1) << std::endl; //pointer to 2nd element 1st index
    std::cout << &myArray << std::endl; //pointer to the whole array space type = int (*)[size]
    return 0;
}