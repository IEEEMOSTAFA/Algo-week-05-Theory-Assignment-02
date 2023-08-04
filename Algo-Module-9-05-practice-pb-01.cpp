#include<bits/stdc++.h>
using namespace std; 
const int N = 2e5;
bool visited[N];
vector<int>adj_list[N];

bool bfs(int src)
{
queue<int>q;
visited[src] = true;
q.push(src);

while(!q.empty())
{
    int head = q.front();
    q.pop();

    for(int adj_node:adj_list[head])
    {
        if(visited[adj_node] == false)
        {
            q.push(adj_node);
            visited[adj_node] = true;
        }
    }
}


}

int main()
{
    int vertex,edge;
    cin>>vertex>>edge;
    for(int i=0;i<edge;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    } 
    int call = 0; 
    for(int i=0;i<vertex;i++)
    {
        if(visited[i] == false)
        call++;
        bfs(i);
    }
    cout<<call;
    return 0;

}