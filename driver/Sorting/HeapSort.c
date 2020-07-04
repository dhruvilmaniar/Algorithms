#include "../../include/Sorting/HeapSort.h"


int main()
{
    int arr[] = {4,2,5,1,77};

    buildMaxHeap(arr, 5);
    printHeap(arr, 5);

    buildMinHeap(arr, 5);
    printHeap(arr, 5);
}