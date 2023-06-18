// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom definition
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void test(vi &val, int k)
{
    int left = 0, right = 0;
    int sum = val[0];
    int maxlen = 0;
    while (right < val.size())
    {
        while (left <= right && sum > k)
        {
            sum -=val[left];
            left++;
        }
        if(sum==k){
            maxlen =max(maxlen,right-left+1);
        }
        right++;
        if(right<val.size()) sum+=val[right];
    }
    cout<<"max length is "<<maxlen;
}

int main()
{
    vi val = {1, 2, 3, 1, 1, 1, 1};
    test(val, 5);

}