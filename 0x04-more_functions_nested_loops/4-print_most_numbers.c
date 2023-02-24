#include "main.h"

/**
 * print_most_numbers - a program that prints most of the numbers
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i != 2 && i != 4)
			_putchar (i + '0');
	}
	_putchar ('\n');
}
