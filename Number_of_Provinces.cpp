// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

void NoP(vector<int> adj[], vector<int>& visit, int a)
{
    visit[a] = 1;
    for (auto i : adj[a])
    {
        if (!visit[i])
        {

            NoP(adj, visit, i);
        }
    }
}

//      1            4                        7
//       \             \                      |
//        2             5                     8
//        /            /
//       3            6
int main()
{
    vector<int> adj[9];
    vector<int> visited(9, 0);
    int a = 1;
    int count=0;
    adj[1] = {2};
    adj[2] = {1,3};
    adj[3] = {2};
    adj[4] = {5};
    adj[5] = {4,6};
    adj[6] = {5};
    adj[7] = {8};
    adj[8] = {7};
    for(int i=1;i<sizeof(adj)/sizeof(adj[0]);i++){
        if(!visited[i]){
            visited[i]=1;
            count++;
            NoP(adj,visited,i);
        }

    }
    cout<<"total number of provinces is "<<count<<endl;

}
