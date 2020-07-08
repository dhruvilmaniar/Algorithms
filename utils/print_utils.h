#pragma once

#include <stdio.h>

void printArray(const char *str, int *arr, int arrLen)
{
    while(*str)
        printf("%c", *str++);
    
    int i = 0;
    while(i<arrLen)
        printf(" %d ", arr[i++]);

    printf("\n");
}