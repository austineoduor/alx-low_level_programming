#include "main.h"
/**
*get_endianness - function to get endian of a machine
*Return:  1 in case of little endian, or 0 in case of big endian.
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*(int *)c);
}
