// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

void test(vi &val, int n)
{

    unordered_map<int, int> value;
    int giveSum = n;
    int len = 0;
    int arrSum = 0;
    int remain = 0;
    for (int i = 0; i < val.size(); i++)
    {
        arrSum += val[i];

        if (arrSum == giveSum)
        {
            len = max(len, i + 1);
        }
        remain = arrSum-n;

        if (value.find(remain) != value.end())
        {
            int length = i-value[remain];
            len = max(len,length);
        }
        if(value.find(arrSum)==value.end()){
            value[arrSum]=i;
        }
        

    }
    cout<<len;
}

int main()
{
    vi val = {1,2,3,1,1,1,1,1,4,2,3};
    test(val, 3);

}