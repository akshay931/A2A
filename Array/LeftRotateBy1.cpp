//Do code everyday and Achieve Your target 
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void test(vi& val,int n){
    int firstVal=val[0];
    int i;
    for(i=0;i<n-1;i++){
        val[i]=val[i+1];
    }
    val[i]=firstVal;
}

int main(){
    vi val = {4,5,6,7,8,9};
    test(val,val.size());

    for (auto i : val)
        cout << i << " ";
}