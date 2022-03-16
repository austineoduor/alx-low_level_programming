#include "main.h"
/**
*_isalpha - checksfor alphabet character.
*
*@c: alphabet character
*
*Return: 1 if c is letter, lowercase or uppercase
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
