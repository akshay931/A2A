// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom definition
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------
// if negative and positive values are equal
vi test(vi &val, int n)
{
    vi ans(n, 0);
    int neg = 1;
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (val[i] < 0)
        {
            ans[neg] = val[i];
            neg += 2;
        }
        if (val[i] >= 0)
        {
            ans[pos] = val[i];
            pos += 2;
        }
    }
    return ans;
}
// if negative and positive values are not equal
void alternate(vi &val)
{
    vi pos, neg;
    for (int i = 0; i < val.size(); i++)
    {
        if (val[i] >= 0)
            pos.push_back(val[i]);

        if (val[i] < 0)
            neg.push_back(val[i]);
    }
    if (neg.size() < pos.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {

            val[i * 2] = pos[i];
            val[1 + (i * 2)] = neg[i];
        }
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            val[index++] = pos[i];
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {

            val[i * 2] = pos[i];
            val[1 + (i * 2)] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            val[index++] = neg[i];
        }
    }
}
int main()
{
    vi val = {-1, 2, 3, 4, -3, 1};
    alternate(val);
    for (auto i : val)
        cout << i << " ";
}