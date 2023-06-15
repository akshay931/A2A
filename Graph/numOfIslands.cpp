// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

void dfs(int row, int col, vector<vector<int>> &visited, vector<vector<int>> &maps)
{
    pair<int, int> newpair;

    visited[row][col] = 1;

    queue<pair<int, int>> q;
    q.push({row, col});
    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for (int delRow = -1; delRow <= 1; delRow++)
        {
            for (int delCol = -1; delCol <= 1; delCol++)
            {
                int nrow = row+delRow;
                int ncol = col+delCol;

                if( nrow>=0 && nrow<maps.size() && ncol>=0 && ncol <maps[0].size() && maps[nrow][ncol]==1 &&!visited[nrow][ncol]){
                    visited[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
}

int island(vector<vector<int>> maps)
{
    vector<int> adj[maps.size()];
    vector<vector<int>> visited(maps.size(), vector<int>(maps[0].size(), 0));

    // for (int i = 0; i < maps.size(); i++)
    // {
    //     for (int j = 0; j < maps[0].size(); j++)
    //     {
    //         if (maps[i][j] == 1 && i != j)
    //         {
    //             adj[i].push_back(j);
    //             adj[j].push_back(i);
    //         }
    //     }
    // }
    int count = 0;
    for (int i = 0; i < maps.size(); i++)
    {
        for (int j = 0; j < maps[0].size(); j++)
        {
            if (!visited[i][j] && maps[i][j]==1)
            {
                count++;
                dfs(i, j, visited, maps);
            }
        }
    }

    return count;
}

int main()
{

    vector<vector<int>> maps{{0, 1, 1, 0}, {0, 1, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 0}, {1, 1, 0, 1}};

    cout << "total number of island is " << island(maps);
}