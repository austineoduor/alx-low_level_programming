#include "main.h"
/**
*print_number - print number
@n: number
*Return 0
*/
void print_number(int n)
{
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}
