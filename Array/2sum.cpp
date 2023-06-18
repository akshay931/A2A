// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

pair<int, int> findSum(vi &val, int n)
{
    unordered_map<int, int> map;
    for (int i = 0; i < val.size(); i++)
    {
        int remaining = n - val[i];
        if (map.find(remaining) != map.end())
        {
            return {val[i], remaining};
        }
        else
            map[val[i]] = i;
    }
    return {-1,-1};
}

int main()
{
    vi val = {2, 6, 5, 8, 11};
    cout << findSum(val, 14).first << " " << findSum(val, 14).second;
}