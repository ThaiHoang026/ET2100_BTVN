#include <iostream>
using namespace std;

#define MAX 100

struct binary_tree_array {
    int data[MAX];
    int size;
};

// khởi tạo
void init_tree(binary_tree_array &t) {
    t.size = 0;
}

// kiểm tra cây rỗng
bool is_empty(binary_tree_array t) {
    return t.size == 0;
}

// thêm node
void add_root(binary_tree_array &t, int value) {
    t.data[1] = value;
    t.size = 1;
}

void add_left(binary_tree_array &t, int parent_index, int value) {
    int index = 2 * parent_index;
    t.data[index] = value;
    if (index > t.size) t.size = index;
}

void add_right(binary_tree_array &t, int parent_index, int value) {
    int index = 2 * parent_index + 1;
    t.data[index] = value;
    if (index > t.size) t.size = index;
}

// duyệt cây
void preorder(binary_tree_array t, int index) {
    if (index > t.size) return;
    cout << t.data[index] << " ";
    preorder(t, index * 2);
    preorder(t, index * 2 + 1);
}

void inorder(binary_tree_array t, int index) {
    if (index > t.size) return;
    inorder(t, index * 2);
    cout << t.data[index] << " ";
    inorder(t, index * 2 + 1);
}

void postorder(binary_tree_array t, int index) {
    if (index > t.size) return;
    postorder(t, index * 2);
    postorder(t, index * 2 + 1);
    cout << t.data[index] << " ";
}
