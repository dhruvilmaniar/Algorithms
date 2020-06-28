#include <stdio.h>
#include <stdbool.h>
#include "linearSearch.h"


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};

    printf("%d\n", linearSearchArray(arr, sizeof(arr)/sizeof(*arr) ,1));

    insertFrontLinkedList(5);
    insertFrontLinkedList(2);
    insertFrontLinkedList(22);
    insertFrontLinkedList(38);


    // linearSearchList is a function that takes int as argument
    // and returns pointer to structure of type node.
    // This node is where the queried data is.
    // Incase of unsuccessfull search, it returns NULL.
    printf("%d\n", linearSearchList(222));
}