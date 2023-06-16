// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void bubbleSort(vi &val, int size)
{
    if(size == 1) return;

        for (int j = 0; j < size; j++)
        {
            if(val[j]>val[j+1]){
                swap(val[j],val[j+1]);
            }

        }
    
    bubbleSort(val,--size);
}

int main()
{
    vi val = {7, 8, 5, 2, 4, 6, 3};
    bubbleSort(val, val.size()-1);
    for(auto i:val){
        cout<<i<<" ";
    }
}