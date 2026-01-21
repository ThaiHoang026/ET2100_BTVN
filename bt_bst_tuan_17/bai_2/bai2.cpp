#include <iostream>
#include <queue>
#include "bai2.hpp"
using namespace std;

bool isSameBookIter(BookNode* b1, BookNode* b2) {
    queue<BookNode*> q1, q2;
    q1.push(b1);
    q2.push(b2);

    while (!q1.empty() && !q2.empty()) {
        BookNode* n1 = q1.front(); q1.pop();
        BookNode* n2 = q2.front(); q2.pop();

        if (!n1 && !n2) continue;
        if (!n1 || !n2) return false;

        if (n1->index != n2->index) return false;
        if (n1->title != n2->title) return false;
        if (n1->children.size() != n2->children.size()) return false;

        for (int i = 0; i < n1->children.size(); i++) {
            q1.push(n1->children[i]);
            q2.push(n2->children[i]);
        }
    }
    return true;
}
