// quick sort and merge sort
#include <iostream>
#include <algorithm>
#include "sort.hpp"


using namespace std;

// QUICK SORT
void quick_sort_recursion(int* arr, int l, int r, long long& comparison_count, int n) {
    int p = arr[(l+r)/2];
    int i = l, j = r;
    bool changed = false;

    while (i <= j) {
        while (arr[i] < p) {
            i++;
            comparison_count++;
        }
        while (arr[j] > p) {
            j--;
            comparison_count++;
        }
        comparison_count++;
        if (i <= j) {
            if (arr[i] != arr[j]) {
                swap(arr[i], arr[j]);
                changed = true;
            }
            i++;
            j--;
        }
    }

    // Print all elements in the array
    if (changed) {
        for (int k = 0; k < n; k++)
            cout << arr[k] << " ";
        cout << endl;
    }

    if (i < r)
        quick_sort_recursion(arr, i, r, comparison_count, n);

    if (l < j)
        quick_sort_recursion(arr, l, j, comparison_count, n);
}

// quick sort public function
long long quick_sort(int* arr, int n) {
    long long comparison_count = 0;
    quick_sort_recursion(arr, 0, n - 1, comparison_count, n);
    return comparison_count;
}


// MERGE SORT
// merge 2 parts
void merge(int *arr, int l, int mid, int r, long long& comparison_count) {
    int i = l, j = mid + 1;
    int k = 0;
    int n = r - l + 1;
    int* temp = new int[n]; 

    while (i <= mid && j <= r) {
        int nextValue;

        if (arr[i] < arr[j])
            nextValue = arr[i++];
        else 
            nextValue = arr[j++];

        temp[k++] = nextValue;
        comparison_count++;
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
        comparison_count++;
    }
    while (j <= r) {
        temp[k++] = arr[j++];
        comparison_count++;
    }

    for (int t=0; t<k; t++)
        arr[l + t] = temp[t];

    delete[] temp;
}

// merge recursion
void merge_recursion(int* arr, int l, int r, long long& comparison_count, int n) {
    if (l >= r)
        return;
    int mid = (l + r) / 2;

    merge_recursion(arr, l, mid, comparison_count, n);
    merge_recursion(arr, mid + 1, r, comparison_count, n);

    merge(arr, l, mid, r, comparison_count);

    // print all elements
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// merge sort public function
long long merge_sort(int* arr, int n) {
    long long comparison_count = 0;
    merge_recursion(arr, 0, n-1, comparison_count, n);
    return comparison_count;
}