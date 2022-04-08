#include <stdio.h>
/**
 * main - entry pt
 * Return: outputs
 */
int main(void)
{
		int dgt = 0;

		for (dgt = 10; dgt < 99; dgt++)
		{
			putchar(dgt);
			putchar(',');
		}

		putchar('\n');
		return (0);
}
