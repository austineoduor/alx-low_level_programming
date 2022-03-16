#include "main.h"
/**
*print_alphabet_x10 - prints the alphabet in lowercase 10 times
*
*Return: On Success 1.
*On error, -1 is retuned.
*/
void print_alphabet_x10(void)
{
	char j = 'a';
	int i;

	for (j = 0 ; j < 10 ; j++)
	{
	for (i = 'a' ; i <= 'z' ; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
	}
}
