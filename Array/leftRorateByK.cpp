//Do code everyday and Achieve Your target 
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void reverse(vi& val,int s,int e){
    while(s<e)
    {
        swap(val[s],val[e]);
        s++;
        e--;
    }
}


void Rotate(vi& val,int k){
    k=k%(val.size());
    reverse(val,0,k-1);
    reverse(val,k,val.size()-1);
    reverse(val,0,val.size()-1);
    
}

int main(){
    vi val = {1,2,3,4,5};
    int k=2;
    Rotate(val,k);

    for (auto i : val)
        cout << i << " ";
}