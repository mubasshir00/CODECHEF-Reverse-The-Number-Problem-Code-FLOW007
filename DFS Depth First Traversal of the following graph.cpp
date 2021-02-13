#include<bits/stdc++.h>
using namespace std ;
#define maxSize 1000000
vector<int >graph[maxSize];
void DFSUtil(int x ,vector<int>graph[],vector<bool>&visited)
{

    visited[x]=true; //  visited then print x  
    cout<<x<<" ";
    for(int i=0;i<graph[x].size();i++)
        if(visited[graph[x][i]]==false)   
            DFSUtil(graph[x][i],graph,visited);  //if nor visited then repeat DFSUtil
    }

DFS(vector<int>graph[],int vertex )
{
    vector<bool>visited(V,false);
    for(int x=0;x<V;x++)
        if(visited[x]==false) // not visited
            DFSUtil(2,graph,visited); // Traversal Start from 2 
}
int main()
{
    int vertex ;
    int edge ;
    cin>>V>>edge ;
    for(int i=0;i<edge ;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);

    }
     DFS(graph,vertex );
    return 0 ;
}
