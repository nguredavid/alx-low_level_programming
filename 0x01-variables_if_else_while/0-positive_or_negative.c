#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - intery point
 * Return: print out the results
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
		printf("%i is positive\n");
		if (n < 0)
		printf("%i is negative");
		else if (n == 0)
		printf("%i is zero");
		return (0);
}
