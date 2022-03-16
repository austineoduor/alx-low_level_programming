#include <stdio.h>
#include "main.h"
/**
*_abs - computers absolute value of an int
*@a: the int to be computer
*Return: Absolute value
*/
int _abs(int a)
{
	if (a < 0)
	{
	return (a * -1);
	}
	return (a);
}
