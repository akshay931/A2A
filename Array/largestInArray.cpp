// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

int main()
{
    vi val = {7, 8, 5, 2, 4, 6, 3};
    int max = val[0];
    for (int i = 0; i <= val.size() - 1; i++)
    {
        if (val[i] > max)
        {
            max = val[i];
        }
    }
    cout << "largest element is " << max << endl;
}
