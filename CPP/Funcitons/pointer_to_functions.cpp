#include<iostream>

int add(int a, int b){
    return a + b;
}

int multiply(int a, int b){
    return a * b;
}

int main(){
  //Syntax: returnType (*op)(int, int) 
    int (*op)(int, int);

    std::cout << "Enter 1 for addition and 2 for multiplication" << std::endl;
    int n;
    std::cin >> n;
    if(n == 1) op = add;
    else op = multiply;

    std::cout << "Enter the two number: ";
    int num1, num2;
    std::cin >> num1 >> num2;

    std::cout << op(num1, num2) << std::endl;

    return 0;
}