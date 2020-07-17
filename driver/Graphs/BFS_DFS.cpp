#include <bits/stdc++.h>


class Graph
{
    private:
        int n_vertices;
        std::list<int> *adj;


        void DFS(int start, std::vector<bool> visited)
        {
            std::cout << start << " ";
            visited[start] = true;

            for(auto i = adj[start].begin(); i!= adj[start].end(); i++)
            {
                if (!visited[*i])
                {
                    visited[*i] = true;
                    DFS(*i, visited);
                }
            }
        }



    public:

        Graph(int n_v) : n_vertices(n_v), adj(new std::list<int>[n_vertices]) {}


        void addEdge(int from, int to)
        {
            this->adj[from].push_back(to);
            std::cout << "Added new edge from " << from << " to " << to << std::endl;
        }


        void BFS(int start)
        {
            std::cout << "BFS from " << start << ": ";


            std::vector<bool> visited(n_vertices);

            visited[start] = true;

            std::queue<int> explored;
            explored.push(start);
            std::list<int>::iterator i;

            while(explored.size())
            {
                int current = explored.front();
                explored.pop();
                std::cout << current << " ";

                for(i = adj[current].begin(); i!= adj[current].end(); i++)
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


        void DFS_Recursive(int start)
        {
            std::vector<bool> visited(n_vertices);

            visited[start] = true;

            std::cout << "DFS from " << start << ": ";
            DFS(start, visited);
            std::cout << '\n';
        }


        void DFS_Iterative(int start)
        {
            std::cout << "DFS from " << start << ": ";

            std::vector<bool> visited(n_vertices);
            visited[start] = true;

            std::stack<int> explored;
            explored.push(start);

            std::list<int>::iterator i;

            while(explored.size())
            {
                int current = explored.top();
                explored.pop();
                std::cout << current << " ";

                for(i = adj[current].begin(); i!= adj[current].end(); i++)
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

};


int main()
{
    int n_vertices = 5;
    Graph g(n_vertices);

    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 

    g.BFS(2);
    // O/p : 2 0 3 1
    g.DFS_Recursive(2);
    // O/P : 2 0 1 3
    g.DFS_Iterative(2);
    // O/P : 2 3 0 1

    // Note : Both are valid permutations.
}