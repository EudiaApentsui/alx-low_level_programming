#include <stdio.h>

/**
 * main - Variable type char not allowed
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar (i + '0');
	putchar ('\n');
	return (0);
}
