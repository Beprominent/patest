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
void selectsort(int arr[], int n){
    int i, j, min_idx;
    for(i = 0; i < n - 1; i++){
        min_idx = i;
        for(j = i + 1; j < n; j++)
            if(arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectsort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}