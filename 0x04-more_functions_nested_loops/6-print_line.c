#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: parameter to be printed
 * Return: 0
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x <= n; x++)
		_putchar('_');
	_putchar('\n');
}
