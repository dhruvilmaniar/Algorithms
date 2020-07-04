#pragma once

#include <stdio.h>
#include <stdbool.h>


static void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}


void minHeapify(int *arr, int index, int heapSize)
{
    int leftChildIndex = 2*index;
    int rightChildIndex = 2*index + 1;

    int smallest = index;

    if (leftChildIndex < heapSize && arr[leftChildIndex]<arr[index])
        smallest = leftChildIndex;
    if (rightChildIndex < heapSize && arr[rightChildIndex]<arr[smallest])
        smallest = rightChildIndex;

    if (index != smallest)
    {
        swap(&arr[smallest], &arr[index]);
        minHeapify(arr, smallest, heapSize);
    }
}


void buildMinHeap(int *arr, int arrLength)
{
    int i = arrLength/2;

    while(i>=0)
    {
        minHeapify(arr, i, arrLength);
        i--;
    }
}


int deleteMin(int *arr, int heapSize)
{
    if (heapSize < 1)
    {
        printf("Heap underflow...\n");
        return -1;
    }
    
    int min = arr[0];

    swap(&arr[0], &arr[heapSize-1]);
    heapSize--;

    minHeapify(arr, 0, heapSize);
    return min;
}


static void printHeap(int *arr, int arrLength)
{
    int i = 0;
    while(i<arrLength)
        printf("%d ", arr[i++]);
    printf("\n");
}


void decreaseValue(int *arr, int index, int newValue, int heapSize)
{
    arr[index] = newValue;

    int i=index;
    while(i>0 && arr[i]<arr[i/2])
    {
        swap(&arr[i], &arr[i/2]);
        i = i/2;
    }
}


void increaseValue(int *arr, int index, int newValue, int heapSize)
{
    arr[index] = newValue;
    minHeapify(arr, index, heapSize);
}


void modifyValue(int *arr, int index, int newValue, int heapSize)
{
    if (index >= heapSize)
    {
        printf("Index out of range...\n");
        return;
    }

    if (newValue< arr[index])
        decreaseValue(arr, index, newValue, heapSize);
    else
        increaseValue(arr, index, newValue, heapSize);
}
