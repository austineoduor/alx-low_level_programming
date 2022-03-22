#include "main.h"

/**
 * rev_string - a function that takes a pointer to an int as parameter and
 * @s: chaine of characters
 * Return: 1 or 0
*/

void rev_string(char *s)
{
	int i = 0, temp, k;
	char c;

	while (s[i] != '\0')
		i++;

	i--;
	temp = i;
	k = i / 2;
	i = 0;

	while (i <= k)
	{
		c = s[i];
		s[i] = s[temp];
		s[temp] = c;
		i++;
		temp--;
	}
}
