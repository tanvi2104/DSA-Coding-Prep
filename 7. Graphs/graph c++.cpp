#include<bits/stdc++.h>
using namespace std;

class Graph {
    int v;  //for vertices
    vector<list<int>> adj; //pointer to array containing adjacency list

    public:
        Graph(int v);  //constuctor
        void addEdge(int v, int w); //function to add edge
        void BFS(int s); //print traversal from source s
};

Graph::Graph(int v)
{
    this->v = v;
    adj.resize(v);
}

void Graph::BFS(int s)
{
    vector<bool> visited;
    visited.resize(v, false);

    list<int> queue;

    visited[s] = true;
    queue.push_back(s);
    while(!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for(auto adjacent : adj[s])
        {
            if(!visited[adjacent])
            {
                visited[adjacent] = true;
                queue.push_back(adjacent);
            }
        }
    }
}

int main()
{
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);

 
    return 0;
}





















