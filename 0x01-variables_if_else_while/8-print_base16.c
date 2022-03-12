#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*
*Return: - Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0 ; i < 16 ; i++)
	{	printf("%0x", i);
	}
	{
		printf("\n");
	}
	return (0);
}
