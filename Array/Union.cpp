// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

vi findUnion(vi set1, vi set2)
{
    int l = 0;
    vi final;
    int r = 0;
    while (l < set1.size() && r < set2.size())
    {
        if (set1[l] < set2[r])
        {
            final.push_back(set1[l]);
            l++;
        }

        else if (set1[l] > set2[r])
        {
            final.push_back(set2[r]);
            r++;
        }
        else
        {
            final.push_back(set1[l]);
            l++;
            r++;
        }
    }
    while (l < set1.size())
    {
        final.push_back(set1[l]);
        l++;
    }
    while (r < set2.size())
    {
        final.push_back(set2[r]);
        r++;
    }
    return final;
}

int main()
{
    vi set1 = {1, 3, 4, 5, 6, 7};
    vi set2 = {2, 3, 5, 6};

    for (auto i : findUnion(set1, set2))
        cout << i << " ";
}