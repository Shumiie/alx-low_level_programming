#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- This program determines if n is positive, negative or zero
 *
 * return: always 0 (sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
