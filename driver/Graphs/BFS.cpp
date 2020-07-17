#include <bits/stdc++.h>


class Graph
{
    private:

        int n_vertices;
        std::list<int> *adj;
    public:

        Graph(int n_v) : n_vertices(n_v), adj(new std::list<int>[n_vertices]) {}

        void addEdge(int node_i, int node_j);

        void BFS(int base_vertex);
};


void Graph::addEdge(int node_i, int node_j)
{
    adj[node_i].push_back(node_j);
    std::cout << "Added new edge from " << node_i << " to " << node_j << std::endl;
}


void Graph::BFS(int base_vertex)
{
    std::vector<bool> visited(n_vertices);
    
    std::queue<int> explored;
    explored.push(base_vertex);
    visited[base_vertex] = true;

    while(explored.size())
    {
        int current = explored.front();
        explored.pop();

        std::cout << current << " ";

        for(auto i = adj[current].begin(); i!=adj[current].end(); i++)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                explored.push(*i);
            }
        }
    }
    std::cout << '\n';
}

int main()
{
    int n_vertices = 5;

    Graph newGraph(n_vertices);
    newGraph.addEdge(0, 1); 
    newGraph.addEdge(0, 2); 
    newGraph.addEdge(1, 2); 
    newGraph.addEdge(2, 0); 
    newGraph.addEdge(2, 3); 
    newGraph.addEdge(3, 3); 

    newGraph.BFS(2);
}