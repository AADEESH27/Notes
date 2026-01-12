#include <iostream>

int main()
{
    // int sum = 0;
    // int i = 50;
    // while (i <= 100)
    // {
    //     sum += i;
    //     i++;
    // }
    // std::cout << sum << "\n";

    // int i = 10;
    // while (i >= 0)
    // {
    //     std::cout << i << " ";
    //     --i;
    // }

    // int start;
    // int end;
    // std::cin >> start >> end;
    // while (start <= end)
    // {
    //     std::cout << start << " ";
    //     ++start;
    // }

    int input;
    int sum = 0;
    while (std::cin >> input)
    {
        sum += input;
        std::cout << sum << "\n";
    }
    return 0;
}