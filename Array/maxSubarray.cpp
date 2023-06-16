// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void test(vi &val, int n)
{
    int currentCount = 0;
    int maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        currentCount += val[i];
        if (currentCount < 0)
        {
            currentCount = 0;
        }
        maxCount = max(maxCount, currentCount);
    }
    cout << "sum max subarray is " << maxCount << endl;
}

int main()
{
    vi val = {-2, -3, 4, -1, -2, 1, 5, -3};
    test(val, val.size());
}