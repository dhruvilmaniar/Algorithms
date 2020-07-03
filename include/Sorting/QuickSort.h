#pragma once

#include <stdio.h>
#include <stdlib.h>

int partition(int *arr, int start, int end)
{
   int i=start-1;

   for(int j=start; j<end-1; j++)
   {
       if (arr[j] <= arr[end-1])
       {
           int temp = arr[++i];
           arr[i] = arr[j];
           arr[j] = temp;
       }
   } 

   int temp = arr[++i];
   arr[i] = arr[end-1];
   arr[end-1] = temp;

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