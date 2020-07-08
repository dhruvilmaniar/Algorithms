// #include "../../include/Sorting/CountingSort.h"
#include "../../utils/print_utils.h"
#include "../../utils/maxArray.h"
#include<stdlib.h>

#define ARRAY_LENGHT 10

int main()
{
    int arr[ARRAY_LENGHT];

    for(int i=0; i<ARRAY_LENGHT; i++)
        arr[i] = rand() % 107;

    printArray("Before", arr, ARRAY_LENGHT);
    printf("%d", maxOfArray(arr, ARRAY_LENGHT));
    // countingSort(arr, ARRAY_LENGHT, max(arr));

    printArray("After", arr, ARRAY_LENGHT);
}