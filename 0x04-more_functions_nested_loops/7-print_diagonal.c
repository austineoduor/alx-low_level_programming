#include "main.h"
#include <stdlib.h>

/**
 * print_diagonal - a function print a number.
 * @n : the number
 *
 */

void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n > 0)
	{
		while (j < n)
		{
			while (i < j)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			i = 0;
			j++;
		}
	}
	else
		_putchar('\n');
}
