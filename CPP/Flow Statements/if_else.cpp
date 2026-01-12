#include <iostream>
int main()
{
    int curr_value = 0;
    int value = 0;
    if (std::cin >> curr_value)
    {
        int count = 1;
        while (std::cin >> value)
        {
            if (value == curr_value)
            {
                ++count;
            }
            else
            {
                std::cout << curr_value << " occurs " << count << " times" << "\n";
                curr_value = value;
                count = 1;
            }
        }
        std::cout << curr_value << " occurs " << count << " times" << "\n";
    }

    return 0;
}