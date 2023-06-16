// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void quickSort(vi &val, int l, int r)
{
    if (l >= r)
        return;
    int i = l;
    int j = r;
    int pivot = val[i];
    while (i < j)
    {
        while (val[++i] <= pivot)
            ;
        while (val[--j] > pivot)
            ;
        if (i < j)
            swap(val[i], val[j]);
    }
    swap(val[l], val[j]);
    quickSort(val, l, j - 1);
    quickSort(val, j + 1, r);
}
int main()
{
    vi val{12, 45, 23, 51, 19, 8};
    quickSort(val, 0, val.size());
    for (auto i : val)
        cout << i << "  ";
}