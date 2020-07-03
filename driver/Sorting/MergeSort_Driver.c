#include "MergeSort.h"

void printArray(int *arr, int arrLen)
{
    int i = 0;
    while(i<arrLen)
        printf("%d ", arr[i++]);
    printf("\n");
}

int main()
{
    int arr[] = {12,11,13,5,6,7,3,3,11,4};
    int arrLen = sizeof(arr) / sizeof(arr[0]);

    printf("Before : ");
    printArray(arr, arrLen);
    mergeSort(arr, 0, arrLen-1);

    printf("After : ");
    printArray(arr, arrLen);
}