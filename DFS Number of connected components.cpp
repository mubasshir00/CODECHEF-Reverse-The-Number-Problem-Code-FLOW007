#include<bits/stdc++.h>
using namespace std ;
#define maxSize 1000000
vector<int >graph[maxSize];
bool visited[10];
void DFSUtil(int x ,vector<int>graph[]/*vector<bool>&visited*/)
{

    visited[x]=true;
   // cout<<x<<" "<<endl;
    for(int i=0;i<graph[x].size();i++)
        if(visited[graph[x][i]]==false)
            DFSUtil(graph[x][i],graph/*,visited*/);
    }

DFS(vector<int>graph[],int V)
{
   // vector<bool>visited(V,false);
    for(int x=0;x<V;x++)
        if(visited[x]==false)
            DFSUtil(1,graph/*,visited*/);
}
int main()
{
    int V;
    int m;
    int connectedComponents=0;
    cin>>V>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);

    }
     DFS(graph,V);
     for(int i = 1;i <= V;++i) {
         if(visited[i] == false)     {
            // DFSUtil(i);
             connectedComponents++;
         }
        }
        cout << "Number of connected components: " << connectedComponents << endl;
    return 0 ;
}

/*
6
4
1 2
2 3
1 3
4 5

ouput : Number of connected components: 3

*/
