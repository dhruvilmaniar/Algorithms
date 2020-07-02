#include "QuickSort.h"


void printArray(int *arr, int arrLen)
{
    int i = 0;
    while(i<arrLen)
        printf("%d ", arr[i++]);
    printf("\n");
}

int main()
{
    int arr[] = {2,2,1,2,2,1,2,1,1};
    int arrLen = sizeof(arr) / sizeof(arr[0]);

    printf("Before : ");
    printArray(arr, arrLen);
    quickSort(arr, 0, arrLen);

    printf("After : ");
    printArray(arr, arrLen);
}