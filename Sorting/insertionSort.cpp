//Do code everyday and Achieve Your target 
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

int main(){
    vi val{7,8,5,2,4,6,3};
    int key;
    for(int i=1;i<val.size();i++){
        key=val[i];
        int j=i-1;
        while(j>=0 && val[j]>key){
            val[j+1]=val[j];
            j--;
        }
        val[j+1]=key;

    }
    for(auto i:val){
        cout<<i<<" ";
    }
}