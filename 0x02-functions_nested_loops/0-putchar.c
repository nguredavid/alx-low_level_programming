#include <stdio.h>
/**
 * main - entry pt
 * Return: prints the output
 */
int main(void)
{

	char ermias[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(ermias[c]);
	}

	putchar('\n');

	return (0);
}
