#include <stdio.h>

/**
 * main - Hexadecimal in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int h;
	char d;

	for (h = 0 ; h < 10 ; h++)
		putchar (h + '0');
	for (d = 'a' ; d <= 'f' ; d++)
		putchar (d);
	putchar ('\n');
	return (0);
}
