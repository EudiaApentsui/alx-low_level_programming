#include "main.h"

/**
 * print_alphabet - A function that  prints lower case alphabets
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar (i);
	_putchar ('\n');
}