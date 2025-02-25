// calculate the hypotenuse

#include <iostream>
#include <cmath>

int main()
{
    int side_a, side_b;
    std::cin >> side_a >> side_b;
    std::cout << sqrt(pow(side_a, 2) + pow(side_b, 2)) << std::endl;
    return 0;
}