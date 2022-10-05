#ifndef _BINARY_SEARCH_
#define _BINARY_SEARCH_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
/*nt interpolation_search(int *array, size_t size, int value);*/
int jump_search(int *array, size_t size, int value);
/*int advanced_binary(int *array, size_t size, int value);*/

#endif
