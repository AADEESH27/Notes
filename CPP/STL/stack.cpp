#include "stl.h"
using namespace std;

int main()
{
    stack<char> st;
    string input = "{[()]()}[({})]()";
    int flag = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '(' || input[i] == '[' || input[i] == '{')
        {
            st.push(input[i]);
        }
        else
        {
            if (input[i] == ')')
            {
                char top = st.top();
                if (top != '(')
                {
                    flag = 1;
                    break;
                }
                else
                {
                    st.pop();
                }
            }
            else if (input[i] == ']')
            {
                char top = st.top();
                if (top != '[')
                {
                    flag = 1;
                    break;
                }
                else
                {
                    st.pop();
                }
            }
            else if (input[i] == '}')
            {
                char top = st.top();
                if (top != '{')
                {
                    flag = 1;
                    break;
                }
                else
                {
                    st.pop();
                }
            }
        }
    }
    if (!st.empty())
    {
        flag = 1;
    }
    if (flag == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}