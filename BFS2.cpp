#include<bits/stdc++.h>
using namespace std ;
vector<int>graph[100];
int visited[100];
int level[100];
void bfs(int start)
{
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
    queue<int>q;
    q.push(start);
    visited[start]=1;
    while(!q.empty())
    {
        int current = q.front();
        cout<<current<<endl;
        q.pop();
        for(int i=0;i<graph[current].size();i++)
        {
            int next = graph[current][i];
            if(!visited[next])
            {
                visited[next] =  true ;
                q.push(next);
                level[next]=level[current]+1;
            }

        }
    }

}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x,y ;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    bfs(2);

    return 0 ;
}
