#include <iostream>
using namespace std;

class Graph {
private:
    int V;
    int** adj;
    bool* visited;
    bool* recursionStack;
    bool hasCycle;

    void dfsUtil(int v) {
        visited[v] = true;
        recursionStack[v] = true;
        cout << v << " ";

        for (int i = 0; i < V; i++) {
            if (adj[v][i]) {
                if (!visited[i]) {
                    dfsUtil(i);
                } else if (recursionStack[i]) {
                    hasCycle = true;
                }
            }
        }

        recursionStack[v] = false;
    }

public:
    Graph(int V) {
        this->V = V;
        adj = new int*[V];
        for (int i = 0; i < V; i++) {
            adj[i] = new int[V]();
        }
        visited = new bool[V]();
        recursionStack = new bool[V]();
        hasCycle = false;
    }

    ~Graph() {
        for (int i = 0; i < V; i++) {
            delete[] adj[i];
        }
        delete[] adj;
        delete[] visited;
        delete[] recursionStack;
    }

    void addEdge(int u, int v) {
        adj[u][v] = 1;
    }

    void dfs() {
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfsUtil(i);
            }
        }
        cout << endl;
    }

    bool detectCycle() {
        return hasCycle;
    }
};

int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(4, 5);
    g.addEdge(5, 2);

    cout << "DFS Traversal: ";
    g.dfs();

    if (g.detectCycle()) {
        cout << "Cycle detected in the graph." << endl;
    } else {
        cout << "No cycle detected." << endl;
    }
    
    return 0;
}
