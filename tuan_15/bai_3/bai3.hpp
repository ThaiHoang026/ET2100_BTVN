#ifndef BAI3_HPP
#define BAI3_HPP
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int v, Node* l = NULL, Node* r = NULL) {
        value = v;
        left = l;
        right = r;
    }
};

void PREORDER_travl(Node* t);
void INORDER_travl(Node* t);
void POSTORDER_travl(Node* t);

class BSTree {
private:
    Node* root;

public:
    BSTree();
    ~BSTree();

    bool isEmpty();
    void makeEmpty();

    void insert(int val1);
    Node* search(int val2);

private:
    void makeEmpty(Node*& t);
    void insert(int val1, Node*& t);
    Node* search(int val2, Node* t);
};

#endif