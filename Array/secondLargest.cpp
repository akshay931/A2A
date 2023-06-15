//Do code everyday and Achieve Your target 
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void secondLargest(vi& val,int n){
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(val[i]>val[largest]){
            res=largest;
            largest=i;
        }
        else if(val[i]<val[largest]){
            if(res==-1 or val[i]>val[res]){ res=i;}
        }
    }
    cout<<"2nd largest is "<<val[res]<<endl;
}

int main(){
    vi val = {7, 8, 5, 2, 4, 6, 3,10};
    secondLargest(val,val.size());

}