#include "bai3.hpp"

// Class BSTree
BSTree::BSTree() {
    root = NULL;
}

BSTree::~BSTree() {
    makeEmpty();
}

bool BSTree::isEmpty() {
    return root == NULL;
}

void BSTree::makeEmpty() {
    makeEmpty(root);
}

void BSTree::makeEmpty(Node*& t) {
    if (!t) return;
    makeEmpty(t->left);
    makeEmpty(t->right);
    delete t;
    t = NULL;
}

void BSTree::insert(int val1) {
    insert(val1, root);
}

void BSTree::insert(int val1, Node*& t) {
    if (t == NULL) {
        t = new Node(val1);
    }
    else if (val1 < t->value) {
        insert(val1, t->left);
    }
    else if (val1 > t->value) {
        insert(val1, t->right);
    }
}

Node* BSTree::search(int val2) {
    return search(val2, root);
}

Node* BSTree::search(int val2, Node* t) {
    if (t == NULL) return NULL;
    if (val2 == t->value) return t;
    if (val2 < t->value) return search(val2, t->left);
    return search(val2, t->right);
}

// Duyet cay
void PREORDER_travl(Node* t) {
    if (!t) return;
    cout << t->value << " ";
    PREORDER_travl(t->left);
    PREORDER_travl(t->right);
}

void INORDER_travl(Node* t) {
    if (!t) return;
    INORDER_travl(t->left);
    cout << t->value << " ";
    INORDER_travl(t->right);
}

void POSTORDER_travl(Node* t) {
    if (!t) return;
    POSTORDER_travl(t->left);
    POSTORDER_travl(t->right);
    cout << t->value << " ";
}
