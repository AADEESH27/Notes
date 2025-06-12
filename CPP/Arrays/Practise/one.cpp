#include <iostream>

double getSum(const double *const arr, int size)
{
    // *arr is constant along with the data it holds
    // arr = some other value not allowed
    // const double this takes care of the data type is constant you cannot put an int or char value to const double
    // *const arr takes care that once the pointer is pointing to something than it does not point to any other value
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}

int main()
{
    double arr[4] = {4.5, 6.3, 2.1, 3.7};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << getSum(arr, size) << std::endl;
    return 0;
}