#include "stl.h"
using namespace std;

int main()
{
    list<int> myList;
    list<int>::iterator it;
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            myList.push_back(i);
        }
        else
        {
            myList.push_front(i);
        }
    }
    std::cout << endl;
    for (it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *(it) << " ";
    }
    cout << endl;
    it = myList.begin();
    for (it = myList.begin(); it != myList.end(); it++)
    {
        if (*it == 2)
        {
            it = myList.erase(it);
        }
    }
    list<int>::iterator start = myList.begin();
    list<int>::iterator end = prev(myList.end());
    while (start != end)
    {
        swap(*start, *end);
        start++;
        end--;
    }
    for (it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *(it) << " ";
    }
    cout << endl;
    return 0;
}