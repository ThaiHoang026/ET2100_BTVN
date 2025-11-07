// Selection Sort, Bubble Sort, Insertion Sort

#include <iostream>
#include <algorithm>
#include "sort.hpp"

using namespace std;

// Selection Sort
long long selection_sort(int* arr, int n) {
    long long comparison_count = 0;

    for (int i=0; i<n-1; i++) {
        int minPosition = i;
        for (int j=i+1; j<n; j++) {

            if (arr[minPosition] > arr[j])
                minPosition = j;
            comparison_count++;
        }
        swap(arr[i], arr[minPosition]);

        // print array after each pass
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    return comparison_count;
}



long long bubble_sort(int* arr, int n) {
    long long comparison_count = 0;

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            comparison_count++;

            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // print array after each pass
        for (int k = 0; k < n; k++)
            cout << arr[k] << " ";
        cout << endl;

        if (!swapped) break;
    }

    return comparison_count;
}




// Insertion Sort
long long insertion_sort(int* arr, int n) {
    long long comparison_count = 0;

    for (int i = 1; i < n; i++) {
        int x = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > x) {
            comparison_count++;
            arr[j + 1] = arr[j];
            j--;
        }

        if (j >= 0)
            comparison_count++;

        arr[j + 1] = x;

        // print array after each pass
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    return comparison_count;
}
