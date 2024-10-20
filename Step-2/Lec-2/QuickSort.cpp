//This is Quick Sorting Algorithm:

/*
Time Complexity => O(nlogn)
Worst Time Complexity => O(n^2)
Space Complexity => O(n)
*/

/*
Approach:
1. First partition && Recursion:
    a. Take the first number as the pivot element.
    b. Now count the number of element which is smaller then the pivot element.
    c. Now swap the pivot element with the start+count in the array and return the index of pivot.
    d. Now again call the Quick Sort funtion and sort the left part of the pivot.
    e. Now again call the Quick Sort function anf sort the right part of the pivot.
*/


//Code 
#include <iostream>
#include <algorithm>
using namespace std;

//Partition process
int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int count = 0;
    for(int i = start + 1; i <= end; i++) {
        if(arr[i] <= pivot) {
            count++;
        }
    }

    // Swap the pivot element with the start + count element
    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    // Put elements smaller than pivot on the left and greater on the right
    int i = start, j = end;
    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= arr[pivotIndex]) {
            i++;
        }
        while(arr[j] > arr[pivotIndex]) {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

//Quick Sort function
void Quicksort(int arr[], int start, int end) {
    // Base condition
    if(start >= end) return;

    // Partition
    int pivotIndex = partition(arr, start, end);

    // Left quick sort
    Quicksort(arr, start, pivotIndex - 1);

    // Right quick sort
    Quicksort(arr, pivotIndex + 1, end);
}

int main() {
    int size;
    cout << "Enter the size of the array you want: ";
    cin >> size;
    int arr[size];
    cout << "Enter the numbers" << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Call the function
    Quicksort(arr, 0, size - 1);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
