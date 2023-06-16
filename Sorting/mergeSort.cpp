// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void merge(vi &val, int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = val[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = val[mid+1+i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            val[k] = a[i];
            k++;
            i++;
        }
        else
        {
            val[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        val[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        val[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(vi &val, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(val, left, mid);
        mergeSort(val, mid + 1, right);
        merge(val,left,mid,right);
    }
}

int main()
{
    vi val = {7, 8, 5, 2, 4, 6, 3};
    int i=0;
    mergeSort(val, i, val.size()-1);
    for (auto i : val)
        cout << i << "  ";
}