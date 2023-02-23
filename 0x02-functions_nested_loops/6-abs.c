#include "main.h"
#include <stdio.h>

/**
 * _abs -  computes the absolute value of an integer
 *
 * @a:parameter to be printed
 *
 * Return: 0
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
