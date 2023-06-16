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
    bool isSorted = 0;
    for (int i = 0; i < val.size(); i++)
    {
        isSorted = 1;
        for (int j = 0; j < val.size()-1; j++)
        {
            if (val[j] > val[j+1])
            {
                swap(val[j], val[j+1]);
                isSorted = 0;
            }
        }
        if(isSorted) break;

    }
    for(auto i:val)
    cout<<i<<" ";
}