#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*print_number - print number
*@n: number
*Return 0
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
