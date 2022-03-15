#include <unistd.h>
/**
*_putchar - writes on stdout character
*Return: on Success 1.
*On error, -1 is returned
*@c: the character to print
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
