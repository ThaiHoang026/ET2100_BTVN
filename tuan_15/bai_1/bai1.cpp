#include <iostream>
#include <vector>
#include "bai1.hpp"
using namespace std;

// Duyet cay
void preorder(Node* root) {
    if (!root) return;
    cout << root->value << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->value << " ";
}

// Vun dong
void treeToArray(Node* root, vector<Node*>& arr) {
    if (!root) return;
    arr.push_back(root);
    treeToArray(root->left, arr);
    treeToArray(root->right, arr);
}

void heapify(vector<Node*>& a, int n, int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && a[l]->value > a[largest]->value) largest = l;
    if (r < n && a[r]->value > a[largest]->value) largest = r;

    if (largest != i) {
        swap(a[i]->value, a[largest]->value);
        heapify(a, n, largest);
    }
}

void buildHeap(Node* root) {
    vector<Node*> arr;
    treeToArray(root, arr);

    int n = arr.size();
    for (int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

