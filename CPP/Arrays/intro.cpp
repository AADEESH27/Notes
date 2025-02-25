#include<iostream>
#include<array>

// void func1(int* arr);
auto func1(int *arr) -> void;
// void func2(std::array<int, 100> &seats);
auto func2(std::array<int, 100> &seats) -> void;

int main()
{
    std::array<int, 100> seats; //STL implementation used more these days does not decay into a pointer when passed to a function
    int arr[5] = {1, 2, 3, 4, 5};
    std::cout << sizeof(arr) / sizeof(int) << std::endl;
    func1(arr);
    func2(seats);
    return 0;
}

void func1(int* arr){
    int size = sizeof(arr) / sizeof(int*); //as the array decays into a pointer so it will not return the size of array user vector or stl array 
    std::cout << size << std::endl;
    std::cout << *(++arr) << std ::endl;
    return;
}

void func2(std::array<int, 100> &seats){
    seats[1] = 1;
    std::cout << seats[1] << std::endl;
    return;
}