#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - Create an array of chars
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character
 * Return: Null if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	arr = (char *) malloc(size);
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
