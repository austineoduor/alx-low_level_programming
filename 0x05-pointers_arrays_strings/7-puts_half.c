#include "main.h"

/**
 * puts_half - a function that takes a pointer to an int as parameter
 * @str: chain of characters
 *
 * Return: 1 or 0
*/

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i + 1) / 2;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
