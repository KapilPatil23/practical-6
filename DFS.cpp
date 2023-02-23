#include<bits/stdc++.h> 

using namespace std; 

// This function implements DFS using Decrease and Conquer approach 
void DFS(int u, vector<int> adj[], vector<bool> &visited) 
{ 
    visited[u] = true; 
    cout << u << " "; 
    
    // traverse all adjacent vertices of vertex u 
    for(int v : adj[u]) 
    { 
        if(!visited[v]) 
        { 
            // recursively call DFS on the adjacent vertex 
            DFS(v, adj, visited); 
        } 
    } 
} 

int main() 
{ 
    // input the number of vertices and edges 
    int V, E; 
    cout << "Enter the number of vertices: "; 
    cin >> V; 
    cout << "Enter the number of edges: "; 
    cin >> E; 
    
    // create an adjacency list representation of the graph 
    vector<int> adj[V]; 
    cout << "Enter the edges (u v) :" << endl; 
    for(int i = 0; i < E; i++) 
    { 
        int u, v; 
        cin >> u >> v; 
        adj[u].push_back(v); 
        adj[v].push_back(u); 
    } 
    
    // mark all vertices as unvisited 
    vector<bool> visited(V, false); 
    
    // perform DFS from all unvisited vertices 
    for(int u = 0; u < V; u++) 
    { 
        if(!visited[u]) 
        { 
            DFS(u, adj, visited); 
        } 
    } 
    return 0; 
} 
