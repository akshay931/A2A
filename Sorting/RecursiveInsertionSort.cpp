// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void insertion(vi &val,int index)
{
    if(index>=val.size()) return;
    int size=val.size();
    for(int i=index;i<size;i++){
        int key = val[i];
        int j=i-1;
        while(j>=0 && val[j]>key){
            val[j+1]=val[j];
            j--;
        }
        val[j+1]=key;
    }
    insertion(val,++index);

}

int main()
{
    vi val = {7, 8, 5, 2, 4, 6, 3};
    insertion(val,1);
    for (auto i : val)
    {
        cout << i << " ";
    }
}