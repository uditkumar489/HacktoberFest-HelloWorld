#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int V);
    void addEdge(int v,int w);
    void DFS();
    void visit(int s,vector<bool> &visited);
};

Graph::Graph(int V)
{
    this->V=V;
    adj=new list<int>[V];
}

void Graph::addEdge(int v,int w)
{
    adj[v].push_back(w);
}

void Graph::visit(int s,vector<bool> &visited)
{
    stack<int> st;
    st.push(s);
    while(!st.empty()){
        s=st.top();
        st.pop();
        if(!visited[s]){
            cout<<s<<" ";
            visited[s]=true;
        }

        for(auto i=adj[s].begin();i!=adj[s].end();++i){
            if(!visited[*i]){
                st.push(*i);
            }
        }

    }

}

void Graph::DFS()
{
    vector<bool> visited(V,false);
    for(int i=0;i<V;++i){
        if(!visited[i])
            visit(i,visited);
    }
}

int main()
{
    int n,e;
    cin >> n >> e;
    Graph g(n);
    int a,b;
    for(int i=0;i<e;++i){
        cin >> a >> b;
        g.addEdge(a,b);
    }
    cout<<"DFS is: "<<endl;
    g.DFS();
    return 0;

}
