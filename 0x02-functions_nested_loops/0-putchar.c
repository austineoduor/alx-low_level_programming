#include <stdio.h>
#include <unistd.h>

/**
*main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char hello[] = "_putchar";
	int i = 0;

	while (hello[i])
	{
	putchar(hello[i]);
	i++;
	}
	putchar('\n');
	return (0);
}
