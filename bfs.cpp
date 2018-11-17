#include<bits/stdc++.h>
using namespace std ;
#define N 100000
vector<int>v[N];
int main()
{
    int n,m,x,y ;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int visited[N],level[N];
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
    queue<int>q;
    q.push(1);
    visited[1]=1;
    level[1]=0;
    while(!q.empty())
    {
        x = q.front(); q.pop();
        for(int i=0;i<v[x].size();i++)
        {
            y = v[x][i];

            if(!visited[y])
            {
                q.push(y);
                visited[y]=1;
                level[y] = level[x] +1;
            }
        }
        cout<<x<<" ";
    }
    return 0 ;
}
