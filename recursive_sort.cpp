void bubbleSort(vector<int>& arr, int n) 
{
    if (n == 1) return;

    bool flag = false;   // move flag outside the loop

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            flag = true;
        }
    }

    // if no swap happened in the entire pass
    if (!flag) return;

    bubbleSort(arr, n - 1);
}

#include <bits/stdc++.h>
using namespace std;

// Helper recursive function
void selectionSortHelper(vector<int>& arr, int index, int n)
{
    if (index == n - 1)
        return;

    int minIndex = index;
    for (int j = index + 1; j < n; j++) {
        if (arr[j] < arr[minIndex]) {
            minIndex = j;
        }
    }

    swap(arr[index], arr[minIndex]);

    selectionSortHelper(arr, index + 1, n);
}

// Function expected by Coding Ninjas
void selectionSort(vector<int>& arr, int n)
{
    selectionSortHelper(arr, 0, n);
}



void insert(vector<int>& arr, int j, int key) {
    if (j < 0 || arr[j] <= key) {
        arr[j + 1] = key;
        return;
    }

    arr[j + 1] = arr[j];
    insert(arr, j - 1, key);
}

void insertionSort(int n, vector<int>& arr) {
    if (n <= 1)
        return;

    insertionSort(n - 1, arr);

    int key = arr[n - 1];
    insert(arr, n - 2, key);
}
