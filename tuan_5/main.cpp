#include <iostream>
#include <algorithm>
#include "sort.hpp"

using namespace std;

int main() {
    // input
    int arr[]= {9,1,8,2,7,3,6,4,5,0};

    int n = sizeof(arr) / sizeof(arr[0]);
    
    // copy new array
    int arr2[n];
    copy(arr, arr + n, arr2);

    int arr3[n];
    copy(arr, arr + n, arr3);
    

    // selection sort
    cout << "SELECTION SORT" << endl;
    long long temp1 = selection_sort(arr, n);
    cout << "So lan so sanh (Selection Sort):" << temp1 << endl << endl;

    // selection sort
    cout << "BUBBLE SORT" << endl;
    long long temp2 = bubble_sort(arr2, n);
    cout << "So lan so sanh (Bubble Sort):" << temp2 << endl << endl;

    // selection sort
    cout << "INSERTION SORT" << endl;
    long long temp3 = insertion_sort(arr3, n);
    cout << "So lan so sanh (Insertion Sort):" << temp3 << endl << endl;
}