#include <iostream>
#include <queue>
#include "adj_matrix.hpp"

using namespace std;

int const MAX_SIZE = 100;

void bfs_adj_matrix(int adjMatrix[MAX_SIZE][MAX_SIZE], int SIZE, int startVertex) {
    bool visited[SIZE] = {false};
    queue<int> q;

    // BFS từ đỉnh bắt đầu (startVertex)
    q.push(startVertex);
    visited[startVertex] = true;

    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u + 1 << " ";

        for (int v = 0; v < SIZE; v++) {
            if (!visited[v] && adjMatrix[u][v]) {
                visited[v] = true;
                q.push(v);
            }
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

                for (int v = 0; v < SIZE; v++) {
                    if (!visited[v] && adjMatrix[u][v]) {
                        visited[v] = true;
                        q.push(v);
                    }
                }
            }
        }
    }
}
