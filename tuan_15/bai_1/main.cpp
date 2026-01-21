#include <iostream>
#include "bai1.hpp"
using namespace std;

int main() {
    // Tao cay
    Node* root = new Node(4);
    root->left = new Node(1);
    root->right = new Node(3);
    root->left->left = new Node(2);
    root->left->right = new Node(16);
    root->right->left = new Node(9);
    root->right->right = new Node(10);
    root->left->left->left = new Node(14);
    root->left->left->right = new Node(8);
    root->left->right->left = new Node(7);
    


    cout << "Preorder: ";
    preorder(root);
    cout << endl;

    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Postorder: ";
    postorder(root);
    cout << endl;

    // Vun dong
    buildHeap(root);

    cout << "Sau khi vun heap (preorder): ";
    preorder(root);
    cout << endl;

    return 0;
}
