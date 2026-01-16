#include <iostream>
#include "list_graph.hpp"

using namespace std;

int main() {
    const int SIZE = 11;
    Node* adjList[SIZE] = {nullptr};

    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 5);
    addEdge(adjList, 0, 6);
    addEdge(adjList, 0, 7);
    addEdge(adjList, 0, 8);
    addEdge(adjList, 0, 9);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 1, 10);
    addEdge(adjList, 3, 2);
    addEdge(adjList, 3, 4);
    addEdge(adjList, 3, 5);
    addEdge(adjList, 4, 5);
    addEdge(adjList, 9, 10);


    bfs_adj_list(adjList, SIZE, 0); // Bắt đầu từ Vertex 1 (index 0)

    return 0;
}