#include "variadic_functions.h"
#include <stdarg.h>
/**
*print_numbers - summing function
*@n :number
*Return: alwys 0 (Success)
*@separator : pointer
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num = 0, i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator == NULL)
		{
		}
		else
		{
			
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
