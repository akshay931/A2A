// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, int parent, int visited[], vector<int> adj[])
{
    visited[node] = 1;
    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            if (dfs(i, node, visited, adj) == 1)
                return 1;
        }
        else if (i != parent)
        {
            return true;
        }
    }
    return false;
}

bool cycle(int src, vector<int> adj[], int visit[])
{
    return dfs(src, -1, visit, adj);
}

int main()
{
    vector<int> adj[8] = {{}, {2, 3}, {1, 5}, {1, 4, 6}, {3}, {2,7}, {3, 7}, {2,6}};
    int visit[8] = {0};
    int src = 1;
    for (int i = 1; i < 8; i++)
    {
        if (!visit[i])
        {
            if (cycle(i, adj, visit))
            {
                cout << "there is cycle";
                return 1;
            }
         
        }
    }
      cout << "ther is no cycle";
                return 0;
}