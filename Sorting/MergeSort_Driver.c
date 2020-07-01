#include "MergeSort.h"

int main()
{
    int arrLength = 10, i=0;
    int arr[] = {4,2,6,1,7,33,3,8,5,0};

    printf("Before : \n");
    while(i<arrLength)
        printf("%d ", arr[i++]);

    printf("\n");

    mergeSort(arr, 0, arrLength);
    i = 0;
    while(i<arrLength)
        printf("%d ", arr[i++]);
}