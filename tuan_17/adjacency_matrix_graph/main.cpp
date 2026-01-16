#include <iostream>
#include "adj_matrix.hpp"

using namespace std;

int main() {
    const int SIZE = 11;

    int adjMatrix[SIZE][SIZE] = {
        0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0,
        1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1,
        0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0,
        1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
        0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0
    };

    int startVertex = 0; // Bắt đầu từ Vertex 1 (index 0)
    bfs_adj_matrix(adjMatrix, SIZE, startVertex);

    return 0;
}