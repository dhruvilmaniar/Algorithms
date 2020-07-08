#pragma once

#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int freq;
    struct Node *left, *right;
};


void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}


void buildMinHeap(int *freqArray, int arrLen)
{
    int n = arrLen/2;

    while(n>=0)
    {
        minHeapify(n, freqArray, arrLen);
        n--;
    }
}


void minHeapify(int i, int *arr, int arrLen)
{
    int leftChild = 2*i;
    int rightChild = 2*i + 1;

    int min = i;

    if (leftChild < arrLen && arr[leftChild]<arr[i])
        min  = leftChild;
    if (rightChild < arrLen && arr[rightChild] < arr[min])
        min = rightChild;

    if (min != i)
    {
        swap(&arr[i], &arr[min]);
        minHeapify(min, arr, arrLen);
    }
}


int extractMinHeap(int *arr, int arrLen)
{
    int temp = arr[0];
    arr[0] = arr[arrLen-1];

    arrLen--;
    minHeapify(0, arr, arrLen);

    return temp;
}


void insertMinHeap(int newValue, int *arr, int arrLen)
{
    arr[arrLen++] = newValue;
    
    int n = arrLen/2;
    while(n>0 && newValue<arr[n])
    {
        minHeapify(n, arr, arrLen);
        n = n/2;
    }
}


void findHuffmanCoding(int *arr, int *freq, int arrLen)
{
    buildMinHeap(freq, arrLen);

    int i=arrLen;
    while(i>0)
    {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        int min = extractMinHeap(freq, arrLen);
        int min2 = extractMinHeap(freq, arrLen);
        newNode->left = min;
        newNode->right = min2;
        newNode->freq = min + min2;
        insertMinHeap(newNode->freq, freq, arrLen);
    }
}


