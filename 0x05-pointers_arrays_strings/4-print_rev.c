#include "main.h"
#include <string.h>

/**
 * print_rev - a function that takes a pointer to an int as parameter
 * @s: chain of chatacters
 *
 * Return: 1 or 0
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	i--;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
