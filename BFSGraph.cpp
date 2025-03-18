#include <iostream>
#include <queue>

using namespace std;

class Graph {
    int V;
    int **adj;

public:
    Graph(int V) {
        this->V = V;
        adj = new int*[V];
        for (int i = 0; i < V; i++) {
            adj[i] = new int[V]{0};
        }
    }

    void addEdge(int v, int w) {
        adj[v][w] = 1;
        adj[w][v] = 1;
    }

    void BFS(int start) {
        bool *visited = new bool[V]{false};
        queue<int> q;

        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int i = 0; i < V; i++) {
                if (adj[node][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        cout << endl;
        delete[] visited;
    }

    ~Graph() {
        for (int i = 0; i < V; i++) {
            delete[] adj[i];
        }
        delete[] adj;
    }
};

int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);

    cout << "Breadth-First Search (BFS) starting from node 0:" << endl;
    g.BFS(0);

    return 0;
}