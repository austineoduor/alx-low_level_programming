#include "variadic_functions.h"
#include <stdarg.h>
/**
*print_strings - printing string function
*@n :number
*Return: alwys 0 (Success)
*@separator : pointer
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, char*);
		if (num != NULL)
			printf("%s", num);
		else
			printf("%p", num);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
