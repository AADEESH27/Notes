#include "stl.h"
using namespace std;

int main()
{
    // vector
    vector<int> v(4, 10);
    v.push_back(5);
    for (int x : v)
    {
        cout << x;
    }
    cout << endl;
    for (int x : v)
    {
        cout << x;
    }
    cout << endl;
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    vector<int>::iterator it_begin;
    int sum = 0;
    for (it_begin = numbers.begin(); it_begin != numbers.end(); it_begin++)
    {
        sum += *(it_begin);
    }
    cout << sum << endl;
    it_begin = numbers.begin();
    vector<int>::iterator it_end = numbers.end() - 1;
    while (it_begin < it_end)
    {
        cout << *(it_begin) << " " << *(it_end) << endl;
        int temp = *(it_begin);
        *(it_begin) = *(it_end);
        *(it_end) = temp;
        it_begin++;
        it_end--;
    }
    for (int x : numbers)
    {
        cout << x << " ";
    }
    cout << endl;
    reverse(numbers.begin(), numbers.end());
    for (int x : numbers)
    {
        cout << x << " ";
    }
    cout << endl;
    it_begin = numbers.begin();
    numbers.insert(it_begin + 3, 9);
    for (int x : numbers)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
