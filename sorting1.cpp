//coding_ninjas 
//insertion sort
//code by: @devanshi-beep
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

//bubble sort
void bubbleSort(vector<int>& arr, int n)
{   
    for (int i = n - 1; i > 0; i--) {
        bool didswap = false;

        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                didswap = true;
            }
        }

        // If no swap happened, array is already sorted
        if (!didswap) break;
    }
}

//selection sort
void selectionSort(vector<int>& arr, int n)
{   
    for (int i = 0; i < n - 1; i++) {
        int mini = i; // Assume current index holds the minimum value

        // Find the index of the smallest element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j; // Update mini if smaller element is found
            }
        }

        // Swap the found minimum element with the first element of unsorted part
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}