#include "../../include/Sorting/HeapSort.h"


int main()
{
    int arr[] = {4,2,5,1,77};

    buildMaxHeap(arr, 5);
    printMaxHeap(arr, 5);
    printf("Deleted max %d \n", deleteMax(arr, 5));
    printMaxHeap(arr, 5);
    printf("Deleted max %d \n", deleteMax(arr, 4));
    printMaxHeap(arr, 5);
    printf("Deleted max %d \n", deleteMax(arr, 3));
    printMaxHeap(arr, 5);
    printf("Deleted max %d \n", deleteMax(arr, 2));
    printMaxHeap(arr, 5);
    printf("Deleted max %d \n", deleteMax(arr, 1));
    printMaxHeap(arr, 5);
    printf("Deleted max %d \n", deleteMax(arr, 0));
    printMaxHeap(arr, 5);

}