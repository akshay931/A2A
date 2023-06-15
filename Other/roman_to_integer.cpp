// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

int R2D(string s)
{
    unordered_map<char, int> umap;
    umap = {
        {'i', 1}, {'v', 5}, {'x', 10}, {'l', 50}, {'c', 100}, {'d', 500}, {'m', 100}};

    int n = s.length();
    int output=0;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && umap[s[i]] < umap[s[i + 1]])
        {
            output+=umap[s[i+1]]-umap[s[i]];
            i++;
        }
        else{
            output+=umap[s[i]];
        }
    }
    return output;
}

int main()
{
    cout << R2D("xii");
}
