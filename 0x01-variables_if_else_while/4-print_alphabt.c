#include <stdio.h>
/**
 * main - entry pt
 * Return: output the results
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'e')
		continue;
		else if (alph == 'q')
		continue;

	putchar(alph);
	}

	putchar('\n');

	return (0);
}

