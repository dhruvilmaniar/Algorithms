#pragma once

#include <stdio.h>
#include <stdbool.h>


void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}


void maxHeapify(int *arr, int index, int heapSize)
{
    int leftChildIndex = 2*index;
    int rightChildIndex = 2*index + 1;

    int largest = index;

    if (leftChildIndex < heapSize && arr[leftChildIndex]>arr[index])
        largest = leftChildIndex;
    if(rightChildIndex < heapSize && arr[rightChildIndex]>arr[largest])
        largest = rightChildIndex;

    if (index != largest)
    {
        swap(&arr[index], &arr[largest]);
        maxHeapify(arr, largest, heapSize);
    }
}


void buildMaxHeap(int *arr, int arrLength)
{
    int i = arrLength/2;

    while(i>=0)
    {
        maxHeapify(arr, i, arrLength);
        i--;
    }
}


void printHeap(int *arr, int arrLength)
{
    int i = 0;
    while(i<arrLength)
        printf("%d ", arr[i++]);
    printf("\n");
}


int deleteMax(int *arr, int heapSize)
{
    if (heapSize<1)
    {
        printf("Heap underflow...\n");
        return -1;
    }

    int max = arr[0];
    swap(&arr[0], &arr[heapSize-1]);

    heapSize--;

    maxHeapify(arr, 0, heapSize);
    return max;
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