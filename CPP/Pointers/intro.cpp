#include<iostream>

int main(){
    int x = 1;
    int* px = &x;
    std::cout<<"address of x: "<<&x<<std::endl; 
    std::cout<<"value of x: "<<*px<<std::endl;
    std::cout << sizeof(int) << std::endl;
    return 0;
}