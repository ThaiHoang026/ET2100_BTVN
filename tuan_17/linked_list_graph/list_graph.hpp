#ifndef LIST_GRAPH_HPP
#define LIST_GRAPH_HPP
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void addEdge(Node* adjList[], int u, int v);
void bfs_adj_list(Node* adjList[], int SIZE, int startVertex);

#endif