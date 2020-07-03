#pragma once

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *arr, int arrLength)
{
    for(int k=1; k<arrLength; k++)
    {
        int j = k-1;
        int key = arr[k];

        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}