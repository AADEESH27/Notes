#include "stl.h"
using namespace std;

bool sortPair(pair<int, string> &a, pair<int, string> &b)
{
    return (a.second < b.second);
}

int main()
{
    // pair<int, string> p;
    vector<pair<int, string>> v;
    v.push_back(make_pair(4, "hello"));
    v.push_back(make_pair(3, "hello"));
    v.push_back(make_pair(2, "hello"));

    sort(v.begin(), v.end(), sortPair);
    // sort(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    // {

    //     for (int j = 1; j < v.size(); j++)
    //     {
    //         if (v[j - 1].first > v[j].first)
    //         {
    //             pair<int, string> temp;
    //             temp.first = v[j - 1].first;
    //             temp.second = v[j - 1].second;
    //             v[j - 1].first = v[j].first;
    //             v[j - 1].second = v[j].second;
    //             v[j].first = temp.first;
    //             v[j].second = temp.second;
    //         }
    //     }
    // }
    for (pair<int, string> p : v)
    {
        std::cout << p.second << " ";
    }

    cout << endl;
    return 0;
}