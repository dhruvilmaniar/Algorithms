#include "../../include/Searching/binarySearch.h"
#include "../../include/Sorting/MergeSort.h"
#include "../../utils/print_utils.h"

#define ARRAY_LENGTH 10


int main()
{
    int arr[ARRAY_LENGTH];

    // Generating random numbers.
    // This will generate same numbers each time you run,
    // Because rand() sets seed to 0.
    // To generate unique permutation each time, use srand(time(0)) before it.
    for (int i=0; i<ARRAY_LENGTH; i++)
        arr[i] = rand() % 100;
    printf("Array before sorting : ");
    printArray(arr, ARRAY_LENGTH);


    // Time complexity of MergeSort : O(nlogn)
    mergeSort(arr, 0, (sizeof(arr)/sizeof(*arr))-1);

    printf("Array after sorting : ");
    printArray(arr, ARRAY_LENGTH);

    // Time complexity of (each) binary search : O(logn)
    printf("%d\n", binarySearchArray_Iterative(arr, 0, (sizeof(arr)/sizeof(*arr))-1, arr[5]));
    printf("%d\n", binarySearchArray_Recursive(arr, 0, (sizeof(arr)/sizeof(*arr))-1, 101));
}