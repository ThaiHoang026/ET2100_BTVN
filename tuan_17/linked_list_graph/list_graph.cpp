#include <iostream>
#include <queue>
#include "list_graph.hpp"

using namespace std;

// Thêm cạnh vào graph (undirected)
void addEdge(Node* adjList[], int u, int v) {
    Node* newNode = new Node{v, adjList[u]};
    adjList[u] = newNode;

    Node* newNode2 = new Node{u, adjList[v]};
    adjList[v] = newNode2;
}

// Duyệt BFS
void bfs_adj_list(Node* adjList[], int SIZE, int startVertex) {
    bool visited[100] = {false};
    queue<int> q;

    // BFS từ đỉnh bắt đầu (startVertex)
    q.push(startVertex);
    visited[startVertex] = true;

    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u + 1 << " ";

        Node* temp = adjList[u];
        while (temp != NULL) {
            int v = temp->data;
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
            temp = temp->next;
        }
    }

    // BFS các thành phần liên thông còn lại
    for (int i = 0; i < SIZE; i++) {
        if (!visited[i]) {
            q.push(i);
            visited[i] = true;

            while (!q.empty()) {
                int u = q.front(); q.pop();
                cout << u + 1 << " ";

                Node* temp = adjList[u];
                while (temp != NULL) {
                    int v = temp->data;
                    if (!visited[v]) {
                        visited[v] = true;
                        q.push(v);
                    }
                    temp = temp->next;
                }
            }
        }
    }
}
