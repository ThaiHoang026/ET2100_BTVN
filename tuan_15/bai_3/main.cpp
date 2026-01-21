#include <iostream>
#include "bai3.hpp"

using namespace std;

int main() {
    BSTree bst;

    bst.insert(5);
    bst.insert(6);
    bst.insert(3);
    bst.insert(8);
    bst.insert(7);
    bst.insert(4);
    bst.insert(2);

    Node *root = bst.search(5);

    cout << "Duyet truoc: ";
    PREORDER_travl(root); cout << endl;

    cout << "Duyet giua: ";
    INORDER_travl(root); cout << endl;

    cout << "Duyet sau: ";
    POSTORDER_travl(root); cout << endl;

    Node* n1 = bst.search(4);
    Node* n2 = bst.search(9);

    if (n1 != NULL)
        cout << "Node co gia tri 4 = " << n1->value << endl;

    if (n2 == NULL)
        cout << "Khong tim thay node co gia tri 9" << endl;

    bst.makeEmpty();

    if (bst.isEmpty())
        cout << "Cay da bi xoa rong" << endl;

    return 0;
}
