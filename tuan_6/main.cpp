#include <iostream>
#include <algorithm>
#include "sort.hpp"

using namespace std;

int main() {
    // input
    int n = 10;
    int arr[n]= {9,1,8,2,7,3,6,4,5,0};


    int arr2[n];
    copy(arr, arr + n, arr2);
    

    // quick sort
    cout << "QUICK SORT" << endl;
    long long temp1 = quick_sort(arr, n);
    cout << "So lan so sanh (Quick Sort):" << temp1 << endl << endl;

    // merge sort
    cout << "MERGE SORT" << endl;
    long long temp2 = merge_sort(arr2, n);
    cout << "So lan so sanh (Merge Sort):" << temp2 << endl;

    return 0;
}