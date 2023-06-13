// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

void dfs(int row, int col, vector<vector<int>> &ans, vector<vector<int>> &image, int newColor, int initColor)
{
    ans[row][col] = newColor;

    if (row + 1 < image.size() && row + 1 >= 0 && col >= 0 && col < image[0].size() && image[row + 1][col] == initColor && ans[row + 1][col] != newColor)
        dfs(row + 1, col, ans, image, newColor, initColor);

    if (row < image.size() && row >= 0 && col + 1 >= 0 && col + 1 < image[0].size() && image[row][col + 1] == initColor && ans[row][col + 1] != newColor)
        dfs(row, col + 1, ans, image, newColor, initColor);

    if (row - 1 < image.size() && row - 1 >= 0 && col >= 0 && col < image[0].size() && image[row - 1][col] == initColor && ans[row - 1][col] != newColor)
        dfs(row - 1, col, ans, image, newColor, initColor);

    if (row < image.size() && row >= 0 && col - 1 >= 0 && col - 1 < image[0].size() && image[row][col - 1] == initColor && ans[row][col - 1] != newColor)
        dfs(row, col - 1, ans, image, newColor, initColor);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    int initColor = image[sr][sc];
    vector<vector<int>> ans = image;
    dfs(sr, sc, ans, image, newColor, initColor);
    return ans;
}

int main()
{

    vector<vector<int>> image{ 
{1, 1, 1, 1, 1, 1, 1, 1}, 
{1, 1, 1, 1, 1, 1, 0, 0}, 
{1, 0, 0, 1, 1, 0, 1, 1}, 
{1, 2, 2, 2, 2, 0, 1, 0}, 
{1, 1, 1, 2, 2, 0, 1, 0}, 
{1, 1, 1, 2, 2, 2, 2, 0}, 
{1, 1, 1, 1, 1, 2, 1, 1}, 
{1, 1, 1, 1, 1, 2, 2, 1}};
    int sr = 4;
    int sc = 4;
    int newColor = 3;
    int initColor = 2;
    for (auto i : image)
    {
        for (auto j : i)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
   
    vector<vector<int>> ans = floodFill(image, sr, sc, newColor);
cout<<endl;
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
}