#include<iostream>

// New syntax for function definition
auto add(float a, float b) -> float;
// Forward Decleration
int add(int a, int b); //Function definition

int main()
{
    std::cout << add(1, 2) << std::endl;
    return 0;
}

int add (int a, int b) {
    return (a + b);
}

float add (float a, float b){
    return (a + b);
}