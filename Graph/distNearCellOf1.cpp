// Do code everyday and Achieve Your target
// Distance of nearest cell having 1
#include <bits/stdc++.h>
using namespace std;

// Custom Defination
#define vvi vector<vector<int>>
#define vi vector<int>
//--------------------------------------------

vvi DistantCell(vvi grid)
{
    vvi visited(grid.size(), vector<int>(grid[0].size(), 0));
    vvi dist(grid.size(), vector<int>(grid[0].size(), 0));
    queue<pair<pair<int,int>,int>> q;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if(grid[i][j]==1){
                q.push({{i,j},0});
                visited[i][j]=1;
            }

        }
    }
    int delrow[] ={-1,0,1,0};
    int delcol[] ={0,1,0,-1};
    while(!q.empty()){
        int row = q.front().first.first;
        int col = q.front().first.second;
        int steps = q.front().second;
        q.pop();
        dist[row][col]=steps;
        for(int i=0;i<=3;i++){
            int nrow = row+delrow[i];
            int ncol = col + delcol[i];
            if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol<grid[0].size()  && !visited[nrow][ncol]){
                visited[nrow][ncol]=1;
                q.push({{nrow,ncol},steps+1});
            }
        }


    }
    return dist;
}

int main()
{
    vvi grid{{0, 0, 0}, {0, 1, 0}, {1, 0, 1}};
    vvi ans = DistantCell(grid);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
}