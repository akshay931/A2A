// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void test(vi &val, int n)
{
    bool isSorted = 1;
    for (int i = 0; i <= n - 2; i++)
    {
        if (val[i] > val[i + 1])
        {
            isSorted = 0;
            break;
        }
    }
    if (isSorted)
        cout << "Sorted";
    else
        cout << "Not Sorted";
}

int main()
{
    vi val = {1,4,5,6};
    test(val, val.size());
}