// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> adj[10];
    queue<int> vert;
    vector<int> visited(10, 0);
    adj[1] = {2, 6};
    adj[2] = {1, 3, 4};
    adj[3] = {2};
    adj[4] = {2, 5};
    adj[5] = {4, 8};
    adj[6] = {1, 7, 9};
    adj[7] = {8, 6};
    adj[8] = {5, 7};
    adj[9] = {6};
    vert.push(1);
    visited[1] = 1;
    while (!vert.empty())
    {
        int v = vert.front();
        cout << v << " ";
        vert.pop();
        for (auto i : adj[v])
        {
            if (visited[i] == 0)
            {
                visited[i] = 1;
                vert.push(i);
            }
        }
    }
}
//     queue   1
//    v=1
//
//
