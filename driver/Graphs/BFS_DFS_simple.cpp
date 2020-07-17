#include <bits/stdc++.h>

typedef std::vector<int> Graph;


void addEdge(Graph g[], int start, int end)
{
    g[start].push_back(end);
    std::cout << "Added new edge from " << start << " to " << end << std::endl;
    // g[end].push_back(start);
}


void BFS(Graph g[], int start, int total)
{
    std::vector<bool> visited(total);

    visited[start] = true;

    std::queue<int> explored;
    explored.push(start);

    while(explored.size())
    {
        int current = explored.front();
        explored.pop();
        std::cout << current << " ";

        for(auto i = g[current].begin(); i!= g[current].end(); i++)
        {
            if (!visited[*i])
            {
                explored.push(*i);
                visited[*i] = true;
            }
        }
    }
    std::cout << '\n';
}


int main()
{
    int n_vertices = 5;
    Graph g[n_vertices];
    
    addEdge(g, 0, 1); 
    addEdge(g, 0, 4); 
    addEdge(g, 1, 2); 
    addEdge(g, 1, 3); 
    addEdge(g, 1, 4); 
    addEdge(g, 2, 3); 
    addEdge(g, 3, 4); 

    BFS(g, 2, n_vertices);


}