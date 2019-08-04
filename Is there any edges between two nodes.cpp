//https://www.hackerearth.com/practice/notes/graph-theory-part-i/


#include<bits/stdc++.h>
using namespace std ;

bool graph[10][10];

void initialize()
{
    for(int i=0;i<=10;i++)
        for(int j=0;j<=10;j++)
        graph[i][j] == false ;
}

int main()
{
    int edges ,nodes ;
    int x,y;
    initialize();     // Since there is no edge initially
    cin>>edges>>nodes;          
    for(int i=0;i<edges;i++)
    {
        cin>>x>>y;
        graph[x][y]= true ;        //mark the edges from vertex x to vertex y
    }

    int posX, posY ;
    while(cin>>posX>>posY)
    {
        if(graph[posX][posY]== true)
        {
            cout<<"There is an edges between " <<posX<<" "<<posY<<endl;
        }
        else
        {
            cout<<"There is no edges between " <<posX<<" "<<posY<<endl;
        }
    }

    return 0;
}
