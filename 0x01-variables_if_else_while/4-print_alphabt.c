#include <stdio.h>

/**
 * main - Print all the letters except q and e
 *
 * Return: 0
 */

int main(void)
{
char m;

for (m = 'a' ; m <= 'z' ; m++)
	if (m != 'e' &&  m != 'q')
		putchar (m);
putchar ('\n');
return (0);
}
