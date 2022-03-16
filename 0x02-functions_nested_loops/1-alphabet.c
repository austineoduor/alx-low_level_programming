#include "main.h"
/**
*print_alphabet - prints the alphabet in lowercase
*
*Return: On Success 1.
*On error, -1 is retuned.
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	_putchar(i);
	_putchar('\n');
}
