#include <iostream>
#include <vector>
#include "bai1.hpp"
using namespace std;

// So chuong
int countChapters(BookNode* root) {
    return root->children.size();
}

// Tim chuong dai nhat
BookNode* longestChapter(BookNode* root) {
    if (root->children.empty()) return NULL;

    BookNode* longest = root->children[0];
    for (auto c : root->children) {
        if (c->pages > longest->pages)
            longest = c;
    }
    return longest;
}

// Tim va xoa chuong
bool deleteSection(BookNode* parent, int index) {
    for (int i = 0; i < parent->children.size(); i++) {
        if (parent->children[i]->index == index) {
            int removedPages = parent->children[i]->pages;
            delete parent->children[i];
            parent->children.erase(parent->children.begin() + i);
            parent->pages -= removedPages;
            return true;
        }
        // Tim kiem de quy trong cac muc con
        if (deleteSection(parent->children[i], index)) {
            parent->pages -= parent->children[i]->pages;
            return true;
        }
    }
    return false;
}

// Tim chuong
BookNode* findChapter(BookNode* root, int chapterIndex) {
    for (auto c : root->children) {
        if (c->index == chapterIndex)
            return c;
    }
    return NULL;
}

// In de muc
void printChapter(BookNode* chapter) {
    if (!chapter) return;

    cout << "Chapter " << chapter->index << ": " << chapter->title 
         << " (" << chapter->pages << " pages)" << endl;

    for (auto sec : chapter->children) {
        cout << "   Section " << sec->index << ": " << sec->title << endl;
    }
}
