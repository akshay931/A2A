// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void test(vi &val, int size)
{
    int low = 0;
    int high = size - 1;
    int mid = 0;
    while (mid < high)
    {
        switch (val[mid])
        {
        case 0:
            swap(val[low++], val[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(val[mid], val[high--]);
        }
    }
}

int main()
{
    vi val = {1, 2, 0, 0, 0, 2, 1, 1, 2, 2, 1, 0, 1, 0, 2, 2, 0};
    test(val, val.size());

    for (auto i : val)
        cout << i << " ";
}