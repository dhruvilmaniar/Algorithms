#include <stdio.h>
#include "binarySearch.h"

int main()
{
    int arr[] = {1,2,3,4,5,6,7};

    printf("%d\n", binarySearchArray_Iterative(arr, 0, (sizeof(arr)/sizeof(*arr))-1, 7));
    printf("%d\n", binarySearchArray_Recursive(arr, 0, (sizeof(arr)/sizeof(*arr))-1, 7));
}