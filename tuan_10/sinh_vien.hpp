#ifndef SINH_VIEN_HPP
#define SINH_VIEN_HPP

#include <vector>
#include <string>

using namespace std;

struct Student {
    string name;
    string id;
    int birthYear;
    double gpa;
};

void printList(const vector<Student>& list);
int length(const vector<Student>& list);
int countHighGPA(const vector<Student>& list);
void insertSorted(vector<Student>& list, const Student& newStudent);
void sortByGPA(vector<Student>& list);

#endif