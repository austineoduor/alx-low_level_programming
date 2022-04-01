#include <stdio.h>
#include <stdlib.h>
/**
*main -entry point
*@argc: count number of arguments
*@argv: value of arguments
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	(void)argv;
	{
		if (argc == 1)
		{
		printf("%d\n", (argc = 0));
		}
		else
		printf("%d\n", argc -= 1);
	}
	return (0);
}
