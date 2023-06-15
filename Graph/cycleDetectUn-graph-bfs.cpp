// Do code everyday and Achieve Your target
// detect a cycle in undirected graph using bfs
#include <bits/stdc++.h>
using namespace std;

bool detectCycle(int src, vector<int> adj[], int visit[])
{
    visit[src] = 1;
    queue<pair<int, int>> q;
    q.push({src, -1});
    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for (auto adjNode : adj[node])
        {
            if (!visit[adjNode])
            {
                visit[adjNode] = 1;
                q.push({adjNode, node});
            }
            else if (adjNode != parent)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    vector<int> adj[8] = {{}, {2, 3}, {1, 5}, {1, 4, 6}, {3}, {2,7}, {3, 7}, {2,6}};
    int visit[8] = {0};
    int src = 1;
    for (int i = 1; i <= 8; i++)
    {
        if (!visit[i])
        {
            if (detectCycle(i, adj, visit))
            {
                cout << "there is cycle" << endl;
                return 1;
            }
        }
        cout << "ther is no Cycle in graph " << endl;
        return 0;
    }
}