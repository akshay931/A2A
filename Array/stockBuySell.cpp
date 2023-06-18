// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom definition
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void test(vi &val, int n)
{
    int minimum = val[0];
    int maximum = 0;
    for (int i = 0; i < val.size(); i++)
    {
        minimum=min(minimum,val[i]);
        maximum=max(maximum,val[i]-minimum);
    }
    cout<<"max profit is "<<maximum;
}

int main()
{
    vi val = {7, 8, 5, 2, 4, 7, 3};
    test(val, val.size());

}