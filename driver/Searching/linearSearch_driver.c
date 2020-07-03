#include "../../include/Searching/linearSearch.h"
#include "../../utils/print_utils.h"

#define ARRAY_LENGTH 10

int main()
{
    int arr[ARRAY_LENGTH];

    for(int i=0; i<ARRAY_LENGTH; i++)
        arr[i] = rand() % 103;

    printf("Array before search : ");
    printArray(arr, sizeof(arr)/sizeof(*arr));

    printf("%d\n", linearSearchArray(arr, sizeof(arr)/sizeof(*arr) ,105));

    insertFrontLinkedList(5);
    insertFrontLinkedList(2);
    insertFrontLinkedList(22);
    insertFrontLinkedList(38);


    // linearSearchList is a function that takes int as argument
    // and returns pointer to structure of type node, if the argument is found
    // in the pre exsisting Linked list.
    // Incase of unsuccessfull search, it returns NULL.
    printf("%d\n", linearSearchList(22));
}