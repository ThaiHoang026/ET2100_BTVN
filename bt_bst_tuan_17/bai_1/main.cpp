#include <iostream>
#include "bai1.hpp"

using namespace std;

int main() {
    BookNode* book = new BookNode(0, "Data Structures Book", 0);

    BookNode* ch1 = new BookNode(1, "Introduction", 30);
    BookNode* ch2 = new BookNode(2, "Trees", 50);
    BookNode* ch3 = new BookNode(3, "Graphs", 40);

    book->children.push_back(ch1);
    book->children.push_back(ch2);
    book->children.push_back(ch3);

    book->pages = ch1->pages + ch2->pages + ch3->pages;

    cout << "So chuong cua sach: " << countChapters(book) << endl;

    BookNode* longest = longestChapter(book);
    cout << "Chuong dai nhat: " << longest->title << endl;

    BookNode* found = findChapter(book, 2);
    cout << "\nThong tin chuong 2:\n";
    printChapter(found);

    return 0;
}
