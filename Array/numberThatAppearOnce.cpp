// Do code everyday and Achieve Your target
// find the number that appear once and other appear twice
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void test(vi &val, int n)
{
    int once = 0;
    for (int i = 0; i < n; i++)
    {
        once ^= val[i];
    }
    cout << "number that appear once is " << once << endl;
}

int main()
{
    vi val = {3, 4, 5, 4, 3, 2, 2, 5, 6};
    test(val, val.size());
}