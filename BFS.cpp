#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

void BFS(vector<int> adj[], int start)
{
    queue<int> q;
    vector<bool> visited(adj->size(), false);
    
    visited[start] = true;
    q.push(start);
    
    while (!q.empty())
    {
        int current = q.front();
        cout << current << " ";
        q.pop();
        
        for (int i = 0; i < adj[current].size(); i++)
        {
            int neighbor = adj[current][i];
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main()
{
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;

    vector<int> adj[vertices + 1];
    
    cout << "Enter the edges: " << endl;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "Enter the starting vertex: ";
    int start;
    cin >> start;

    BFS(adj, start);

    return 0;
}
