#include <iostream>
#include <algorithm>
#include "sinh_vien.hpp"

using namespace std;

// In danh sách
void printList(const vector<Student>& list) {
    cout << "DANH SACH SINH VIEN\n";
    for (const auto& s : list) {
        cout << "Ho ten: " << s.name
             << ", MSSV: " << s.id
             << ", Nam sinh: " << s.birthYear
             << ", GPA: " << s.gpa << endl;
    }
}

// Tính chiều dài danh sách
int length(const vector<Student>& list) {
    return list.size();
}

// Đếm sinh viên GPA > 3.2
int countHighGPA(const vector<Student>& list) {
    int count = 0;
    for (const auto& s : list)
        if (s.gpa > 3.2) count++;
    return count;
}

// Thêm sinh viên theo thứ tự tăng dần GPA
void insertSorted(vector<Student>& list, const Student& newStudent) {
    auto pos = lower_bound(
        list.begin(),
        list.end(),
        newStudent.gpa,
        [](const Student& s, double gpa) {
            return s.gpa < gpa;
        }
    );
    list.insert(pos, newStudent);
}

// Sắp xếp tăng dần theo GPA
void sortByGPA(vector<Student>& list) {
    sort(list.begin(), list.end(),
        [](const Student& a, const Student& b) {
            return a.gpa < b.gpa;
        }
    );
}