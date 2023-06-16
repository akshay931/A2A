// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------
// o(n) time but without relative order
void move(vi &val, int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        while (val[i] != 0)
            i++;
        while (val[j] == 0)
            j--;
        if (i <= j)
            swap(val[i], val[j]);
    }
}
// o(n) with relative order
void moveZero(vi &val, int n)
{
    if (n > 1)
    {
        int l = 0;
        int r = 0;

        while (r < n - 1)
        {
            while (val[l] != 0)
                l++;
            while (val[r] == 0)
                r++;
            if (r <= n - 1)
                swap(val[l], val[r]);
        }
    }
}

int main()
{
    vi val = {0,1,0,3,12};
    moveZero(val, val.size());

    for (auto i : val)
        cout << i << " ";
}