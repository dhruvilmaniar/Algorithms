#pragma once

#include <stdio.h>
#include <stdlib.h>


void merge(int *arr, int start, int mid, int end)
{
    int leftLen = mid - start + 1;
    int rightLen = end - mid;

    int leftArr[leftLen], rightArr[rightLen];

    for (int i=0; i<leftLen; i++)
        leftArr[i] = arr[start+i];
    for (int j=0; j<rightLen; j++)
        rightArr[j] = arr[mid+j+1];

    int i=0, j=0, k=start;
    while(i < leftLen && j < rightLen)
    {
        if (leftArr[i] <= rightArr[j])
            arr[k++] = leftArr[i++];
        else
            arr[k++] = rightArr[j++];
    }

    while(i < leftLen)
        arr[k++] = leftArr[i++];
    while(j < rightLen)
        arr[k++] = rightArr[j++];
}


void mergeSort(int *arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end-start)/2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);

        merge(arr, start, mid, end);
    }
}