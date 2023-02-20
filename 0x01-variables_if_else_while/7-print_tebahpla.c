#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char m;

	for (m = 'z' ; m >= 'a' ; m--)
		putchar (m);
	putchar ('\n');
	return (0);
}
