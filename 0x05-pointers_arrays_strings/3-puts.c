#include "main.h"

/**
 * _puts - a function that takes a pointer to an int as parameter
 * @str: chain of chatacters
 *
 * Return: 1 or 0
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
