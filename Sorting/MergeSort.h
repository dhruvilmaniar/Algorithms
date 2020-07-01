#pragma once

#include <stdio.h>

#define MAX 10000


void merge(int *arr, int start, int mid, int end)
{
    int ii = start;
    // while(ii<end)
    //     printf("%d ", arr[ii++]);
    // printf("|| ");
    int length_lefthalf = mid - start;
    int length_righthalf = end - mid;

    int lefthalf[length_lefthalf+1], righthalf[length_righthalf+1];

    for (int i = 0; i<length_lefthalf; i++)
        lefthalf[i] = arr[start+i];
    for (int i = 0; i<length_righthalf; i++)
        righthalf[i] = arr[mid+i];

    lefthalf[length_lefthalf] = MAX;
    righthalf[length_righthalf] = MAX;

    int i=0, j=0;
    for (int k = start; k<end; k++)
    {
        if (lefthalf[i] <= righthalf[j])
            arr[k] = lefthalf[i++];
        else
            arr[k] = righthalf[j++];
    }

    ii = start;
    // while(ii<end)
    //     printf("%d ", arr[ii++]);
    // printf("\n");
}


void mergeSort(int *arr, int start, int end)
{
    if (start<end)
    {
        printf("%d to %d \n", start, end);
        int mid = (start+end)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);

        merge(arr, start, mid, end);
    }
}
