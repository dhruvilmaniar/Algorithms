#include "../../include/Sorting/BubbleSort.h"
#include "../../utils/print_utils.h"

#define ARRAY_LENGTH 10


int main()
{
    int arr[ARRAY_LENGTH];

    for (int i=0; i<10; i++)
        arr[i] = rand() % 107;

    printArray("Array before :", arr, ARRAY_LENGTH);

    bubbleSort(arr, ARRAY_LENGTH);

    printArray("Array after : ",arr, ARRAY_LENGTH);
}