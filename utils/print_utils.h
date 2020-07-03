#pragma once

#include <stdio.h>

void printArray(int *arr, int arrLen)
{
    int i = 0;
    while(i<arrLen)
        printf("%d ", arr[i++]);

    printf("\n");
}