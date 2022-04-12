#include <stdio.h>
/**
 * main - entry pt
 * Return: outputs
 */
int main(void)

{
		int dgt;

		for (dgt = 0; dgt <= 9; dgt++)
		{
			putchar((dgt % 10) + '0');
			if (dgt == 9)
				continue;
			putchar(',');
			putchar(' ');
		}

		putchar('\n');
		return (0);
}
