// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void search(vi &val, int n)
{
    bool found = 0;
    int i;
    for (i = 0; i < val.size(); i++)
    {
        if (val[i] == n)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        cout << "value " << n << " found at location " << i << " ";
    }
    else
        cout << "No Given element found in array";
}

int main()
{
    vi val = {7, 8, 5, 2, 4, 6, 3};
    search(val, 0);
}