#include "main.h"
#include <ctype.h>

/**
 * _isdigit - a function that checks for a digit
 * @c: parameter to be printed
 * Return: 1 if digit
 * otherwise 0
 */

int _isdigit(int c)
{
	if (c <= '0' && c <= '9')
		return (1);
	else
		return (0);
}
