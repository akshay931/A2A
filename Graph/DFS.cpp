// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], vector<int> visit, int a)
{
    visit[a] = 1;

    cout << a << " ";
    for (auto i : adj[a])
    {
        if (!visit[i])
        {

            dfs(adj, visit, i);
        }
    }
}

int main()
{
    vector<int> adj[9];
    vector<int> visited(9, 0);
    int a = 1;
    int i = 0;
    adj[1] = {2, 3};
    adj[2] = {1, 5, 6};
    adj[3] = {1, 4, 7};
    adj[4] = {3, 8};
    adj[5] = {2};
    adj[6] = {2};
    adj[7] = {3, 8};
    adj[8] = {4, 7};
    stack<int> s;
    dfs(adj, visited, a);
}
