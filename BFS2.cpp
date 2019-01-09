#include<bits/stdc++.h>
using namespace std ;
#define N 100000
vector<int>v[N];
int visited[1000];
int level[1000];
bool BFS(){
queue<int>q;
    int src,x,y ;
    q.push(0);
    visited[0]=1;
    level[1]=0;
    bool isBI =true;
    while(!q.empty())
    {
        x = q.front(); q.pop();
        cout<<x<<endl;
        for(int i=0;i<v[x].size();i++)
        {
            y = v[x][i];
            if(visited[y]==0)
            {
                if(visited[x]==1)
                {
                    visited[y]=2;
                }
                else
                {
                    visited[y]=1;
                }
                q.push(y);
               // visited[y]=1;
               // level[y] = level[x] +1;
            }
            else if(visited[x]==visited[y])
            {
            return false;
            }

        }
    }
    return true ;
}

int main()
{

    int n,m,x,y ;
    while(cin>>n)
    {
        if(n==0)break;
        cin>>m;
       for(int i=0;i<n;i++)
       {
           v[i].clear();
       }
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    //int visited[N],level[N];
   BFS();

    }
    return 0 ;
}
