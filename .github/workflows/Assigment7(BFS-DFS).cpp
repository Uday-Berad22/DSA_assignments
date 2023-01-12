#include<bits/stdc++.h>
using namespace std;
int Graph[10][10];
int visited1[10]={0};
int visited2[10]={0};
void BFS(int i,int n)
{
    queue<int> q;
    int u;
    cout<<i<<" ";
    visited2[i]=1;
    q.push(i);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(int i=1;i<=n;i++)
        {
            if(visited2[i]!=1&& Graph[i][u]==1)
            {
                cout<<i<<" ";
                q.push(i);
                visited2[i]=1;
            }
        }
    }
    

}
void DFS(int u,int n)
{
    if(visited1[u]==0)
    {
        cout<<u<<" ";
        visited1[u]=1;
        for(int i=1;i<=n;i++)
        {
            if(visited1[i]==0&& Graph[i][u]==1)
            {
                DFS(i,n);
            }
        }
    }
}
int main()
{
    for(int i=1;i<8;i++)
    {
        for(int j=1;j<8;j++)
        {
            cin>>Graph[i][j];
        }
    }
    int n=7;
    DFS(1,n);
    cout<<endl;
    BFS(1,n);
    return 0;
}
