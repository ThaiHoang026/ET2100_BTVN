#ifndef BAI1_HPP
#define BAI1_HPP
#include <iostream>
#include <vector>

using namespace std;


struct BookNode {
    int index;              // so thu tu (vi du: 1,2,3...)
    string title;           // ten chuong / muc
    int pages;              // so trang
    vector<BookNode*> children;   // cac muc con

    BookNode(int idx, string t, int p) {
        index = idx;
        title = t;
        pages = p;
    }
};

int countChapters(BookNode* root);
BookNode* longestChapter(BookNode* root);
bool deleteSection(BookNode* parent, int index);
BookNode* findChapter(BookNode* root, int chapterIndex);
void printChapter(BookNode* chapter);

#endif