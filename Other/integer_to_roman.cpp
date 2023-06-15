// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
#include <string>
using namespace std;

string test(int digit)
{
    string ans;
    vector<pair<int, string>> roman = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "LC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
 
 for(int i=0;digit>0;++i){
while(digit>=roman[i].first){
    ans+=roman[i].second;
    digit-=roman[i].first;

}
 }

    return ans;
}

int main()
{
    int digit = 2856;
    cout << test(digit) << endl;
}