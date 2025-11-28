#include <iostream>
#include <vector>
#include "sinh_vien.hpp"

using namespace std;

int main() {
    // Tạo danh sách sinh viên mẫu
    vector<Student> list = {
        {"Nguyen Van A", "202412000", 2006, 3.5},
        {"Tran Thi B",   "202412032", 2005, 2.8},
        {"Le Van C",     "202414483", 2006, 3.1},
        {"Pham Thi D",   "202414822", 2006, 3.9}
    };

    // In danh sách sinh viên
    printList(list);

    // In chiều dài danh sách
    cout << "\nChieu dai danh sach: " << length(list) << endl;

    // Đếm số sinh viên có GPA > 3.2
    cout << "So sinh vien GPA > 3.2: " << countHighGPA(list) << endl;

    // Sắp xếp danh sách theo GPA
    sortByGPA(list);
    cout << "\nDanh sach sau khi sap xep theo GPA:\n";
    printList(list);

    // Thêm sinh viên mới
    Student newStudent = {"Sinh Vien Moi", "2024999", 2005, 2.4};
    insertSorted(list, newStudent);

    cout << "\nDanh sach sau khi them sinh vien GPA = 2.4:\n";
    printList(list);

    return 0;
}