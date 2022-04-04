#include "main.h"
/**
 * _strspn - Get the length of a prefix substring
 * @s: string
 * @accept: bytes
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
			j++;
		}
		if (!*(accept + j))
		{
			return (i);
		}
		i++;
	}
	return (i);
}
