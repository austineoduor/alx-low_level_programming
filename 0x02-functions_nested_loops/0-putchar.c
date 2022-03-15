#include <stdio.h>
#include <unistd.h>
#include "main.c"
/**
*main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char hello[] = "_putchar\n";
	int i = 0;

	while (hello[i])
	{
		_putchar(hello[i]);
		i++;
	}
	return (0);
}
