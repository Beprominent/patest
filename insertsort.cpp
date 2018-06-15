//
// Created by xie on 18-6-13.
//

#include <iostream>
using namespace std;

void insertsort(int arr[], int n){
    int i, key, j;
    for(i = 1; i < n; i++){
        key = arr[i];
        for(j = i; j > 0 && arr[j - 1] > key; j--){
            arr[j] = arr[j-1];
        }
        arr[j] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}



/* Driver program to test insertion sort */
int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertsort(arr, n);
    printArray(arr, n);

    return 0;
}