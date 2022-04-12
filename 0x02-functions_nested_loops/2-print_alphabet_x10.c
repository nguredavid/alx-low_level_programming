#include "main.h"
/**
 * print_alphabet_x10 - entry pt
 * Return: always o
 */
void print_alphabet_x10(void);
{
	int a;
	char alp;

	for (a = 0; a < 10; a++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
