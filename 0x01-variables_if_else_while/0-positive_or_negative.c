#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - A number stored in a variable is negative or positive
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if"(n > 0)
		printf"(" is positive\n");
	else if"(n == 0)
		printf"("is zero\n");
	else
		printf("is negative\n");

	return (0);
}
