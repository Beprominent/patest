//
// Created by xie on 18-6-13.
//

#include <iostream>
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubblesort(int arr[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i -1; j++){
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {12, 34, 54, 2, 3}, i;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sorting: \n";
    printArray(arr, n);

    bubblesort(arr, n);
    cout << "\nArray after sorting: \n";
    printArray(arr, n);

    return 0;
}