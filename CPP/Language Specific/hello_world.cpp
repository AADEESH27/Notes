#include<iostream>

int sum (int number1, int number2){
    return number1 + number2;
}

int main() {
    int number1 {};
    int number2 {};
    int number3 {};
    std::cin >> number1 >> number2 >> number3;;
    std::cout << number1 << ", " << number2 << ", " << number3 << "\n";
    // std::cout << sum(number1, number2) << std::endl;

    [[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused
    [[maybe_unused]] double gravity { 9.8 }; // Don't complain if gravity is unused
    [[maybe_unused]] double phi { 1.61803 }; // Don't complain if phi is unused

    std::cout << pi << '\n';
    std::cout << phi << '\n';
    
    return 0;
}