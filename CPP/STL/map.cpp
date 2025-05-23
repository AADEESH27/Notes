#include "stl.h"

int main()
{
    std::unordered_map<int, int> mp;
    mp.insert({1, 2});
    std::unordered_map<int, int>::iterator it = mp.begin();
    while (it != mp.end())
    {
        // std::cout << it << std::endl;
        std::cout << it->first << std::endl;
        it++;
    }
    return 0;
}