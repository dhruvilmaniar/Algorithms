#pragma once

#include <stdio.h>
#include <stdbool.h>


static void swap(int *first, int *second)
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


static void printHeap(int *arr, int arrLength)
{
    int i = 0;
    while(i<arrLength)
        printf("%d ", arr[i++]);
    printf("\n");
}


void increaseValue(int *arr, int index, int newValue, int heapSize)
{
    arr[index] = newValue;

    int i = index;
    while(i>0 && arr[i]>arr[i/2])
    {
        swap(&arr[i], &arr[i/2]);
        i = i/2;
    }
}


void decreaseValue(int *arr, int index, int newValue, int heapSize)
{
    arr[index] = newValue;
    maxHeapify(arr, index, heapSize);        
}


void modifyValue(int *arr, int index, int newValue, int heapSize)
{
    if (index>=heapSize)
    {
        printf("Index out of range...\n");
        return;
    }
    if (newValue > arr[index])
        increaseValue(arr, index, newValue, heapSize);
    else
        decreaseValue(arr, index, newValue, heapSize);
}