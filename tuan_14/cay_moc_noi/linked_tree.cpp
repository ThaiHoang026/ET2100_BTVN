#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// khởi tạo cây
Node* create_node(int value) {
    Node* p = new Node;
    p->data = value;
    p->left = NULL;
    p->right = NULL;
    return p;
}

// kiểm tra cây rỗng
bool is_empty(Node* root) {
    return root == NULL;
}

// thêm con
void add_left(Node* parent, int value) {
    parent->left = create_node(value);
}

void add_right(Node* parent, int value) {
    parent->right = create_node(value);
}

// duyệt cây
void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
