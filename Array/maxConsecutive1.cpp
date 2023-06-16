// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void test(vi &val, int n)
{
    int maxCount = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (val[i] == 1)
        {
            count++;
        }
        else
        {
            maxCount = max(maxCount, count);
            count = 0;
        }
    }
    maxCount = max(maxCount, count);

    cout << "max number of consecutive one's is " << maxCount << endl;
}

int main()
{
    vi val = {1, 1, 0, 1, 1, 1};
    test(val, val.size());
}