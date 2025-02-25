#include<iostream>

int main(){
    int *y = new int(5);
    std::cout << y << std ::endl;
    int x[5] = {1, 2, 3, 4, 5};
    // std::cout << *x << std::endl;

    int numberOfStudents = 100000;
    // std::cin >> numberOfStudents; //100000000 gives segmentation fault
    // int students[numberOfStudents];
    int* students = new int[numberOfStudents];
    std::cout << students << std::endl;
    for (int i = 0; i < numberOfStudents; i++)
    {
        students[i] = i;
    }
    std::cout<<sizeof(int);
    delete[] students;
    delete y;
    return 0;
}
//Normal array
// int name[]
// int name[]
// int name[]
// int name[]
// int name[]
// int name[]
// //How to allocate in heap
// int* name = new int[]
// int* name = new int[]
// int* name = new int[]
// int* name = new int[]
// int* name = new int[]
// int* name = new int[]