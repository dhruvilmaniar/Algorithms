#pragma once

#include <stdio.h>
#include <stdlib.h>


void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}


int partition(int *arr, int start, int end)
{
    int i=start-1;

    for(int j=start; j<end-1; j++)
    {
        if (arr[j] <= arr[end-1])
            swap(&arr[++i], &arr[j]);       
    } 

    swap(&arr[++i], &arr[end-1]);
    return i;
}


void quickSort(int *arr, int start, int end)
{
    if (start < end)
    {
        int sortedIndex = partition(arr, start, end);

        quickSort(arr, start, sortedIndex);
        quickSort(arr, sortedIndex+1, end);
    }
}