// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void test(vi &val, int n)
{
    int sums = 0;
    for (int i = 0; i < n; i++)
        sums = sums ^ val[i] ^ (i + 1);
    sums = sums ^ (n + 1);
    cout << "missing number is " << sums;
}

int main()
{
    vi val = {4, 3, 7, 6, 2, 1};
    test(val, val.size());
}