#pragma once

#include <stdio.h>
#include <stdlib.h>

int binarySearchArray_Iterative(int *arr, int l_index, int r_index, int target)
{
    while(l_index <= r_index)
    {
        int middle = (r_index + l_index) / 2;

        if (arr[middle] == target)
            return middle;
        else if(arr[middle] > target)
            r_index = middle - 1;
        else 
            l_index = middle + 1;
    }

    return -1;
}


int binarySearchArray_Recursive(int *arr, int l_index, int r_index, int target)
{

    if (l_index <= r_index)
    {
        int middle = (r_index + l_index) / 2;

        if (arr[middle] == target)
            return middle;
        else if (arr[middle] > target)
            return binarySearchArray_Recursive(arr, l_index, middle-1, target);
        else 
            return binarySearchArray_Recursive(arr, middle+1, r_index, target);
    }
    else return -1;
}