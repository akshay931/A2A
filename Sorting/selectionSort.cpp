// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------
int main()
{

    vi val{12, 45, 23, 51, 19, 8};
    int minimumIndex;
    for (int i = 0; i < val.size() - 1; i++)
    {
        minimumIndex = i;
        for (int j = i + 1; j < val.size(); j++)
        {
            if (val[j] < val[minimumIndex])
            {
                minimumIndex = j;
            }
        }
        swap(val[i], val[minimumIndex]);
    }
    for (auto i : val)
    {
        cout << i << " ";
    }
}