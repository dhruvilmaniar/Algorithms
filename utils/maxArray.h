#pragma once

#include <stdio.h>
#include <math.h>


int maxOfArray(int *arr, int arrLen)
{
    int max = (pow(2, sizeof(int*)) / 2) * -1;
    printf("Max of the array is : %d\n", max);

    return max;
}