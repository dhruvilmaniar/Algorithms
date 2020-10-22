#include <bits/stdc++.h>


void addEdge(std::vector<int> adj[], int source, int destination)
{
    adj[source].push_back(destination);
    adj[destination].push_back(source);
}


void Cycle_BFS(std::vector<int> adj[], int n_vertices)
{
    int start = 0;
    std::vector<bool> visited(n_vertices);
    visited[start] = true;

    std::queue<int> explored;
    explored.push(start);
    int parent = -1;
    bool flag = false;

    while(explored.size())
    {
        int current = explored.front();
        explored.pop();
        // std::cout << current << " ";

        for(std::vector<int>::iterator i = adj[current].begin(); i!=adj[current].end(); i++)
        {

            if (visited[*i] == true && *i!=parent)
            {
                std::cout << "Cycle detected at node : " << *i << '\n';
                // flag = true;
                // break;
            }
            if (!visited[*i])
            {
                explored.push(*i);
                visited[*i] = true;
            }
        }
        // std::cout << '\n';

        // if (flag)
        //     break;

        parent = current;
    }
}


void DFS(std::vector<int> adj[], std::vector<bool> visited, int start, int parent)
{
    visited[start] = true;

    for(std::vector<int>::iterator i=adj[start].begin(); i!=adj[start].end(); i++)
    {
        if (visited[*i] == true && *i!=parent)
        {
            std::cout << "Cycle detected at node : " << *i << '\n';
        }

        if(!visited[*i])
        {
            visited[*i] = true;
            DFS(adj, visited, *i, start);
        }
    }
}


void Cycle_DFS(std::vector<int> adj[], int n_vertices)
{
    std::vector<bool> visited(n_vertices);

    int start = 0;
    visited[start] = true;

    DFS(adj, visited, 0, -1);
}


int main()
{
    int n_vertices = 5;
    std::vector<int> g[n_vertices];

    addEdge(g, 0, 2); 
    addEdge(g, 1, 2); 
    addEdge(g, 2, 0); 
    addEdge(g, 0, 1); 
    // addEdge(g, 2, 3); 
    // addEdge(g, 3, 3); 

    std::cout << "Using BFS : \n";
    Cycle_BFS(g, n_vertices);

    std::cout << "Using DFS : \n";
    Cycle_DFS(g, n_vertices);
}