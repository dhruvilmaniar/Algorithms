#include "../../include/Sorting/QuickSort.h"
#include "../../utils/print_utils.h"

#define ARRAY_LENGTH 10

int main()
{
    int arr[ARRAY_LENGTH];
    for(int i=0; i<ARRAY_LENGTH; i++)
        arr[i] = rand() % 107;

    printf("Before : ");
    printArray(arr, ARRAY_LENGTH);
    quickSort(arr, 0, ARRAY_LENGTH);

    printf("After : ");
    printArray(arr, ARRAY_LENGTH);
}