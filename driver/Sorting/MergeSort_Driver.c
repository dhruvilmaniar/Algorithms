#include "../../include/Sorting/MergeSort.h"
#include "../../utils/print_utils.h"

#define ARRAY_LENGTH 10

int main()
{
    int arr[ARRAY_LENGTH];
    for(int i=0; i<ARRAY_LENGTH; i++)
        arr[i] = rand() % 105;

    printf("Before : ");
    printArray(arr, ARRAY_LENGTH);
    mergeSort(arr, 0, ARRAY_LENGTH-1);

    printf("After : ");
    printArray(arr, ARRAY_LENGTH);
}