#include "main.h"
/**
*times_table - print the 9 tmes table from 0
*Return: On sucess 1
*On error, -1 is returned
*/
void times_table(void)
{
	int i = 0, j = 0, k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			k = i * j;
			if (k <= 9)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			if (j < 9)
			{
			_putchar(',');
				if (k <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
