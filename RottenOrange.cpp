// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

int RottenOrange(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int vis[n][m];
    queue<pair<pair<int, int>, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push({{i, j}, 0});
                vis[i][j] = 2;
            }
            else
            {
                vis[i][j] = 0;
            }
        }
    }
    int maxTime = 0;

    while (!q.empty())
    {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        maxTime = max(maxTime, t);
        q.pop();
        int row[] = {-1, 0, +1, 0};
        int col[] = {0, +1, 0, -1};
        for (int i = 0; i <= 3; i++)
        {
            int nrow = row[i] + r;
            int ncol = col[i] + c;
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1)
            {
                q.push({{nrow, ncol}, t++});
                vis[nrow][ncol] = 2;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] != 2 && grid[i][j] == 1)
            {
                return -1;
            }
        }
    }
    return maxTime;
}

int main()
{
    vector<vector<int>> grid{{0, 1, 2}, {0, 1, 1}, {2, 1, 1}};
    int n = grid.size();
    int m = grid[0].size();

    cout << RottenOrange(grid);
}