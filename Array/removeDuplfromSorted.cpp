// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void test(vi &val, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (val[i] == val[i - 1])
        {
            val.erase(val.begin() + i-1);
            i--;
            n--;
        }
    }
}

    int main()
    {
        vi val = {1, 2, 2, 2, 3, 4, 5, 5, 8};
        test(val, val.size());

        for (auto i : val)
            cout << i << " ";
    }