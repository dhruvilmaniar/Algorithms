#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


void countingSort(int *arr, int arrLen, int upperBound)
{
    int temp[upperBound] = { 0 };
    
    for(int i=0; i<arrLen; i++)
        temp[arr[i]]++;

    for(int i=0; i<upperBound; i++)
    {
        while(temp[i]--)
            printf("%d ", i);
    }
    printf("\n");
}