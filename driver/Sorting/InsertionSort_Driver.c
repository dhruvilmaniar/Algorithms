#include "../../include/Sorting/InsertionSort.h"
#include "../../utils/print_utils.h"

#define ARRAY_LENGTH 10


int main()
{
    int arr[ARRAY_LENGTH];

    for(int i=0; i<ARRAY_LENGTH; i++)
        arr[i] = rand() % 107;

    printf("Array before sorting : ");
    printArray(arr, ARRAY_LENGTH);

    // Average case time complexity of insertionSort is O(nlogn).
    insertionSort(arr, ARRAY_LENGTH);

    printf("Array after sorting : ");
    printArray(arr, ARRAY_LENGTH);
}