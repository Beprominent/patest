//
// Created by xie on 18-6-15.
//

#include <iostream>
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i){
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    // If left child is larger than root
    if(l < n && arr[l] > arr[largest]){
        largest = l;
    }
    // If right child is larger than root
    if(r < n && arr[r] > arr[largest]){
        largest = r;
    }
    if(largest != i){
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

//main function to do heap sort
void heapsort(int arr[], int n){
    for(int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    //One by one extract an element from heap
    for(int i = n-1; i >= 0; i--){
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Driver program
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    heapsort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);
}