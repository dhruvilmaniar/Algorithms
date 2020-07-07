#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}


void bubbleSort(int *arr, int arrLen)
{
    int i,j,k;
    bool swapped = false;

    for(int i=0; i<arrLen; i++)
    {
        for(int j=0; j<arrLen-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swapped = true;
                swap(&arr[j], &arr[j+1]);
            }
        }

        if (!swapped)
            break;
    }
}