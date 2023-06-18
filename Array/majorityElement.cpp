// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Definition
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void test(vi &val, int n)
{
    int element = val[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (count == 0)
        {
            element = val[i];
        }
        if (val[i] == element)
            count++;
        else
        {
            count--;
        }
    }
    count = 0;

    for (int i = 0; i < n; i++)
    {
        if (element == val[i])
            count++;
    }
    if (count > (n / 2))
    {
        cout << "majority element is " << element;
    }
    else
        cout << "no majority element found";
}
a
int main()
{
    vi val = {2, 5, 5, 4, 5, 1,5};
    test(val, val.size());
}