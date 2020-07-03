#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *link;
};

struct node *HEAD = NULL;


int linearSearchArray(int *arr, int size_arr, int target)
{
    for(int i=0; i<size_arr; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

// THis function takes int as argument and returns pointer to 
// a structure of type node.
struct node *linearSearchList(int target)
{
    struct node *temp = HEAD;

    while(temp)
    {
        if (temp->data == target)
            return temp;

        temp = temp->link;
    }
    return temp;
}


void insertFrontLinkedList(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    if (HEAD == NULL)
    {
        newNode->link = NULL;
        HEAD = newNode;
    }

    else
    {
        newNode->link = HEAD;
        HEAD = newNode;
    }

    return;    
}