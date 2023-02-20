#include <stdio.h>

/**
 * main - Print both lower and upper alphabets on a new line
 *
 * Return: 0
 */

int main(void)
{
char b;
for (b = 'a' ; b <= 'z' ; b++)
	putchar (b);
putchar ('\n');

for (b = 'A' ; b <= 'Z' ; b++)
	putchar (b);
putchar ('\n');
return (0);
}
