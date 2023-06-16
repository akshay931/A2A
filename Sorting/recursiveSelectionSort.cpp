//Do code everyday and Achieve Your target 
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void selection(vi& val,int ind){
    if(ind>=val.size()) return;
    int min=ind;
    int firstVal=ind;
    for(int i=ind+1;i<val.size();i++){
        if(val[i]<val[min]){
            min =i;
        }
    }
    swap(val[min],val[firstVal]);
    selection(val,++ind);

}

int main(){
     vi val{12, 45, 23, 51, 19, 8};
     selection(val,0);
     for(auto i:val)
     cout<<i<<"  ";
    
}