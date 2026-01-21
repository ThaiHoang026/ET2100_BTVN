#ifndef BAI1_HPP
#define BAI1_HPP

#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int v) {
        value = v;
        left = right = NULL;
    }
};

void preorder(Node* root);
void inorder(Node* root);
void postorder(Node* root);
void treeToArray(Node* root, vector<Node*>& arr);
void heapify(vector<Node*>& a, int n, int i);
void buildHeap(Node* root);

#endif

