#include <iostream>
#include "bai2.hpp"

using namespace std;

int main() {
    // Tao cuon sach 1
    BookNode* book1 = new BookNode(0, "Data Structures", 0);

    BookNode* ch1_1 = new BookNode(1, "Introduction", 30);
    BookNode* ch1_2 = new BookNode(2, "Trees", 50);
    BookNode* ch1_3 = new BookNode(3, "Graphs", 40);

    book1->children.push_back(ch1_1);
    book1->children.push_back(ch1_2);
    book1->children.push_back(ch1_3);

    BookNode* sec2_1 = new BookNode(21, "Binary Tree", 25);
    BookNode* sec2_2 = new BookNode(22, "AVL Tree", 25);

    ch1_2->children.push_back(sec2_1);
    ch1_2->children.push_back(sec2_2);



    // Tao cuon sach 2
    BookNode* book2 = new BookNode(0, "Data Structures", 0);

    BookNode* ch2_1 = new BookNode(1, "Introduction", 30);
    BookNode* ch2_2 = new BookNode(2, "Trees", 50);
    BookNode* ch2_3 = new BookNode(3, "Graphs", 40);

    book2->children.push_back(ch2_1);
    book2->children.push_back(ch2_2);
    book2->children.push_back(ch2_3);

    BookNode* sec2_1_copy = new BookNode(21, "Binary Tree", 25);
    BookNode* sec2_2_copy = new BookNode(22, "AVL Tree", 25);

    ch2_2->children.push_back(sec2_1_copy);
    ch2_2->children.push_back(sec2_2_copy);



    // So sanh hai cuon sach
    if (isSameBookIter(book1, book2)) {
        cout << "Hai cuon sach la ban copy cua nhau" << endl;
    } else {
        cout << "Hai cuon sach KHONG phai ban copy cua nhau" << endl;
    }

    return 0;
}
