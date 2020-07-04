// #include "../../include/Sorting/MaxHeapSort.h"
#include "../../include/Sorting/MinHeapSort.h"


int main()
{
    int arr[] = {4,2,5,1,77};

    // buildMaxHeap(arr, 5);
    // printHeap(arr, 5);

    buildMinHeap(arr, 5);
    printHeap(arr, 5);
}